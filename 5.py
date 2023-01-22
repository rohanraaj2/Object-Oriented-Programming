class Vehicle:
    color = "White"

    def __init__(self, name, max_speed, mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage

    def show(self):
        print("Color:", self.color + ',', "Vehicle name:", self.name + ',',
              "Speed:", str(self.max_speed) + ',', "Mileage:", str(self.mileage))


class Bus(Vehicle):
    pass


class Car(Vehicle):
    pass


my_bus = Bus("School Volvo", 180, 12)
my_car = Car("Audi Q5", 240, 18)

my_bus.show()
my_car.show()


# Color: White, Vehicle name: School Volvo, Speed: 180, Mileage: 12
# Color: White, Vehicle name: School Volvo, Speed: 180, Mileage: 12

# Color: White, Vehicle name: Audi Q5, Speed: 240, Mileage: 18
# Color: White, Vehicle name: Audi Q5, Speed: 240, Mileage: 18
