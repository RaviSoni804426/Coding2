class Fan:
# Method 1: Start, then Stop
    def start_stop(self):
        self.start()
        self.stop()

    # Method 2: Start, Rotate, then Stop
    def start_rotate_stop(self):
        self.start()
        self.rotate()
        self.stop()

    # Method 3: Start, Rotate, Blow Air, then Stop
    def start_rotate_blow_air_stop(self):
        self.start()
        self.rotate()
        self.blow_air()
        self.stop()
fan=fan()
