#include<iostream>
using namespace std;
class Complex
{
private:
 double real;
 double imag;
public:
 Complex(double x, double y)
 {
 this -> real = x;
 this -> imag = y;
 }
 Complex()
 {
 this -> real = 0;
 this -> imag = 0;
 }

 void show()
 {
 if (imag < 0)
cout << real << imag << 'i' << endl;
   else
 cout << real << '+' << imag << 'i' << endl;

 }
 Complex add(Complex a)
 {
 Complex result;
 result.real = real + a.real;
 result.imag = imag + a.imag;
 return result;
 }

 Complex add(double a)
 {
 Complex result;
 result.real = real + a;
 result.imag = imag;
 return result;
 }

 Complex subtract(Complex a)
 {
 Complex result;
 result.real = real - a.real;
 result.imag = imag - a.imag;
 return result;
 }

 Complex subtract(double a)
 {
 Complex result;
 result.real = real - a;
 result.imag = imag;
 return result;
 }

 Complex multiply(Complex a)
 {
 Complex result;
 result.real = (real * a.real) - (imag * a.imag);
 result.imag = (real * a.imag) + (imag * a.real);
 return result;
 }
 Complex multiply(double a)
 {
 Complex result;
 result.real = (real * a);
 result.imag = (imag * a);
 return result;
 }
};
