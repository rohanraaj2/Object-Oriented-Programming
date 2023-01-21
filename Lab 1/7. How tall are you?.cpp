#include <iostream>
using namespace std;
int main()
{
 float m;
 int ft;
 int inches;
 cin >> m;
 inches = m * 100 / 2.54;
 ft = inches / 12;
 inches = inches - (ft * 12);
 cout << m << " m is approximately equivalent to " << ft << " ft and " <<
inches << " inches!";
}
