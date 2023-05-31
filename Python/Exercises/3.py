class Vehicle:

    def __init__(self, name, max_speed, mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage


class Bus(Vehicle):
    pass


modelX = Bus("School Volvo", 180, 12)
print("Vehicle Name: " + str(modelX.name) + " " + "Speed: " +
      str(modelX.max_speed) + " " + "Mileage: " + str(modelX.mileage))
