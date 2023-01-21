#include<iostream>
using namespace std;
class Complex
{
 private:
 double real;
 double imag;
 public:
 Complex()
 {
 real = 0;
 imag = 0;
 }
 Complex(double r, double i)
 {
 real = r;
 imag = i;
 }
 Complex operator + (const Complex &x)
 {
 Complex result;
 result.real = real + x.real;
 result.imag = imag + x.imag;
 return result;
 }
 Complex operator + (double x)
 {
 Complex result;
 result.real = real + x;
 result.imag = imag;
 return result;
 }
 Complex operator - (const Complex &x)
 {
 Complex result;
 result.real = real - x.real;
 result.imag = imag - x.imag;
 return result;
 }
 Complex operator - (double x)
 {
 Complex result;
 result.real = real - x;
 result.imag = imag;
 return result;
 }
 Complex operator * (const Complex &x)
 {
 Complex result;
 result.real = (real * x.real) - (imag * x.imag);
 result.imag = (real * x.imag) + (imag * x.real);
 return result;
}
 Complex operator * (double x)
 {
 Complex result;
 result.real = real * x;
 result.imag = imag * x;
 return result;
 }
 friend ostream & operator << (ostream& out, const Complex &x);
 friend istream & operator >> (istream& in, Complex &x);
 // void show(Complex c)
 // {
 // if(c.imag>0)
 // cout<<c.real<<"+"<<c.imag<<"i";
 // else
 // {
 // cout<<c.real<<c.imag<<"i";
 // }
 // cout<<endl;
// }
};
ostream & operator << (ostream& out, const Complex &x)
{
 if (x.imag >= 0)
 {
 out << x.real << '+' << x.imag << 'i';
 }
 else if (x.imag < 0)
 {
 out << x.real << x.imag << 'i';
 }
 return out;
}
istream & operator >> (istream& in, Complex &x)
{
 in >> x.real;
 in >> x.imag;
 return in;
}
