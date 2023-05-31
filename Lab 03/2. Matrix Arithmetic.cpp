#include <iostream>
using namespace::std;
void print_matrix(int matrix[], int columns, int num_of_elements)
{
 for (int i = 0; i < num_of_elements; i++)
 {
 if (i > 0 && i % columns == 0)
 {
 cout << endl;
 }
 cout << (matrix[i]) << " ";
 }
}
void input_matrix(int matrix[], int num_of_elements)
{
 for (int i = 0; i < num_of_elements; i++)
 {
 cin >> matrix[i];
 }
}
void add_matrices(int matrix1[], int matrix2[], int matrix3[], int
num_of_elements)
{
for (int i = 0; i < num_of_elements; i++)
 {
 matrix3[i] = matrix1[i] + matrix2[i];
 }
}
void subtract_matrices(int matrix1[], int matrix2[], int matrix3[], int
num_of_elements)
{
 for (int i = 0; i < num_of_elements; i++)
 {
 matrix3[i] = matrix1[i] - matrix2[i];
 }
}
int main ()
{
 bool r;
 int rows;
 int columns;
 cin >> rows;
 cin >> columns;
 int num_of_elements = rows * columns;
 int matrix1[num_of_elements], matrix2[num_of_elements],
matrix3[num_of_elements];
 char character;
 input_matrix(matrix1, num_of_elements);
 input_matrix(matrix2, num_of_elements);

 cin >> character;
 if (character == '+')
 {
 add_matrices(matrix1, matrix2, matrix3, num_of_elements);
 }
 else if (character == '-')
 {
 subtract_matrices(matrix1, matrix2, matrix3, num_of_elements);
 }
 print_matrix(matrix3, columns, num_of_elements);
}
