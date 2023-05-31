class Main:
    def __init__(self):
        for car_number in range(20):
            if car_number < 10:
                car = DefaultCar()
                print("Car", car_number, "has a current speed of", car.current_speed)
            elif car_number >= 10:
                car = RocketCar()
                print("Car", car_number, "has a current speed of", car.current_speed)

class Car:
    # A class representing a car object.

    def __init__(self, current_speed=0, maximum_speed=0, acceleration=10.0):
        # Initializes an instance of the Car class with the given current speed, maximum speed, and acceleration.
        self.current_speed = current_speed
        self.maximum_speed = maximum_speed
        self.acceleration = acceleration

    def getSpeed(self):
        # Returns the current speed of the car.
        return self.current_speed

    def doAccelerate(self):
        # Accelerates the car by the given amount.
        self.current_speed += self.acceleration
        if self.current_speed > self.maximum_speed:
            self.current_speed = self.maximum_speed

class RocketCar(Car):
    # A class representing a rocket-powered car object.

    def __init__(self, current_speed=0, maximum_speed=400, acceleration=10.0):
        # Initializes an instance of the RocketCar class with the given current speed, maximum speed, and acceleration.
        super().__init__(current_speed, maximum_speed, acceleration)

    def boost(self):
        # Boosts the car by accelerating it by 20.0.
        super().doAccelerate(20.0)


class DefaultCar(Car):
    # A class representing a default car object.

    def __init__(self, current_speed=0, maximum_speed=200, acceleration=10.0):
        # Initializes an instance of the DefaultCar class with the given current speed, maximum speed, and acceleration.
        super().__init__(current_speed, maximum_speed, acceleration)


instance = Main()
