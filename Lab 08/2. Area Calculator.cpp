class Area
{
 private:
 Distance length;
 Distance width;

 public:
 Area(Distance x, Distance y): length {x}, width {y} {}

 operator double()
 {
 double x{length.feet + (length.inches/12)};
 double y{width.feet + (width.inches/12)};
 return x * y;
 }
};
