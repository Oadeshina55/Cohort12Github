import time

class Meter:
    def __init__(self, meter_id):
        self.meter_id = meter_id
        self.readings = {'voltage': 0, 'current': 0, 'power': 0}

    def update_readings(self, voltage, current, power):
        self.readings['voltage'] = voltage
        self.readings['current'] = current
        self.readings['power'] = power

class HeadEndSystem:
    def __init__(self):
        self.meters = {}

    def add_meter(self, meter_id):
        if meter_id not in self.meters:
            self.meters[meter_id] = Meter(meter_id)

    def update_meter_readings(self, meter_id, voltage, current, power):
        if meter_id in self.meters:
            self.meters[meter_id].update_readings(voltage, current, power)

    def display_readings(self):
        for meter_id, meter in self.meters.items():
            print(f"Meter ID: {meter_id}")
            print(f"Voltage: {meter.readings['voltage']} V")
            print(f"Current: {meter.readings['current']} A")
            print(f"Power: {meter.readings['power']} W")
            print("=" * 20)

def main():
    head_end_system = HeadEndSystem()

    # Simulate adding meters
    head_end_system.add_meter("M001")
    head_end_system.add_meter("M002")

    while True:
        # Simulate updating meter readings
        head_end_system.update_meter_readings("M001", 230, 10, 2300)
        head_end_system.update_meter_readings("M002", 240, 8, 1920)

        # Display updated readings
        head_end_system.display_readings()

        time.sleep(5)  # Simulate a delay between updates

if __name__ == "__main__":
    main()

