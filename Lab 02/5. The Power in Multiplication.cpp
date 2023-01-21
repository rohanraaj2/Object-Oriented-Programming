using namespace std;
void power(int base, int exponent)
{
 int result = base;
 if ((base < 1 || base > 10) || (exponent < 0 || exponent > 5))
{
 cout << "Invalid input!";
}
 else
 {
 if (exponent == 0)
 {
 result = 1;
 }
 else
 {
 for (int i = 0; i < exponent - 1; i++)
 {
 result = result * base;
 }

 }
 cout << base << " to the power of " << exponent << " is: " << result;
 }

}
int main()
{
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */
 int base, exponent;
 cin >> base >> exponent;
power(base, exponent);
  return 0;
}
