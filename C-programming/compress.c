#include <stdio.h>
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>

int main() {
    const char* inputPath = "input.mp4";
    const char* outputPath = "output_compressed.mp4";
    
    av_register_all();
    
    AVFormatContext* formatContext = avformat_alloc_context();
    avformat_open_input(&formatContext, inputPath, NULL, NULL);
    avformat_find_stream_info(formatContext, NULL);
    
    AVCodec* codec = avcodec_find_encoder(AV_CODEC_ID_H264);
    AVCodecContext* codecContext = avcodec_alloc_context3(codec);
    codecContext->bit_rate = 400000;
    codecContext->width = 640;
    codecContext->height = 480;
    codecContext->time_base = (AVRational){1, 25};
    codecContext->framerate = (AVRational){25, 1};
    codecContext->gop_size = 10;
    codecContext->max_b_frames = 1;
    codecContext->pix_fmt = AV_PIX_FMT_YUV420P;
    
    avcodec_open2(codecContext, codec, NULL);
    
    AVStream* stream = avformat_new_stream(formatContext, codec);
    avcodec_parameters_from_context(stream->codecpar, codecContext);
    
    avformat_write_header(formatContext, NULL);
    
    AVPacket packet;
    while (av_read_frame(formatContext, &packet) >= 0) {
        if (packet.stream_index == 0) {
            av_packet_rescale_ts(&packet, formatContext->streams[0]->time_base, stream->time_base);
            packet.stream_index = stream->index;
            av_interleaved_write_frame(formatContext, &packet);
        }
        av_packet_unref(&packet);
    }
    
    av_write_trailer(formatContext);
    
    avcodec_close(codecContext);
    avcodec_free_context(&codecContext);
    avformat_close_input(&formatContext);
    avformat_free_context(formatContext);
    
    return 0;
}
