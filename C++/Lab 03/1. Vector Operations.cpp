#include <iostream>
using namespace::std;
void input_vector(int arr[], int n)
{
 for (int i = 0; i < n; i++) {
 cin >> arr[i];
}
void print_vector(int vector[], int n)
{
 for (int i = 0; i < n; i++) {
 cout << (vector[i]) << " ";
 }
}
void add_vectors(int vector1[], int vector2[], int vector3[], int n)
{
 for (int i = 0; i < n; i++) {
 {
 vector3[i] = vector1[i] + vector2[i];
 }

}
}
void subtract_vectors(int vector1[], int vector2[], int vector3[], int n)
{
 for (int i = 0; i < n; i++) {
 {
 vector3[i] = vector1[i] - vector2[i];
 }
}
}
bool compare_vectors(int vector1[], int vector2[], int n)
{
 for (int i = 0; i < n; i++) {
 {
 if (vector1[i] != vector2[i])
 {
 return false;
 }

 }
}
return true;
}
int main()
{
 bool r;
 int n;
 cin >> n;
 int vector1[n], vector2[n], vector3[n];
 char character;
 input_vector(vector1, n);
 input_vector(vector2, n);
 cin >> character;

 if ((character == '+') || (character == '-'))
 {
 if (character == '+')
 {
 add_vectors(vector1, vector2, vector3, n);
 }
 else if (character == '-')
 {
 subtract_vectors(vector1, vector2, vector3, n);
}
print_vector(vector3, n);
 }

 else if (character == '=')
 {
 r = compare_vectors(vector1, vector2, n);
 if (r == true)
 {
 cout << "EQUAL";
 }
 else if (r == false)
 {
 cout << "UNEQUAL";
 }
 }
}
