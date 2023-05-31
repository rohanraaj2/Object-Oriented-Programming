class Car:
  
  def __init__(self, name, current_speed = 0, maximum_speed, acceleration = 10.0):
    self.name = name
    self.current_speed = current_speed
    self.maximum_speed = maximum_speed
    self.acceleration = acceleration
    
   def getSpeed (self):
    return self.current_speed
  
  def doAccelerate (self, acceleration):
    self.acceleration = acceleration
    self.current_speed += self.acceleration
    if self.current_speed > self.maximum_speed:
      self.current_speed = self.maximum_speed
      
  class RocketCar(Car):
    def __init__(self, name, current_speed = 0, maximum_speed = 400, acceleration = 10.0):
      super().__init__(name, current_speed, maximum_speed, acceleration)
      
     def boost(self):
      return super().doAccelerate(20.0)
    
    class DefaultCar(Car):
      def __init__(self, name, current_speed = 0, maximum_speed = 200, acceleration = 10.0):
        super().__init__(name, current_speed, maximum_speed, acceleration)
