double* add(double* c1, double* c2)
{
 float real_result = c1[0] + c2[0];
 float imaginary_result = c1[1] + c2[1];
 double *arr = new double[2];
 *(arr + 0) = real_result;
 *(arr + 1) = imaginary_result;
 return arr;
}
double* add(double* c1, double d1)
{
 float real_result = c1[0] + d1;
 float imaginary_result = c1[1];
 double* arr = new double[2];
 *(arr + 0) = real_result;
 *(arr + 1) = imaginary_result;
 return arr;
}
double* subtract(double* c1, double* c2)
{
 float real_result = c1[0] - c2[0];
 float imaginary_result = c1[1] - c2[1];
 double* arr = new double[2];
 *(arr + 0) = real_result;
 *(arr + 1) = imaginary_result;
 return arr;
}
double* subtract(double* c1, double d1)
{
 float real_result = c1[0] - d1;
 float imaginary_result = c1[1];
 double* arr = new double[2];
 *(arr + 0) = real_result;
*(arr + 1) = imaginary result;
  return arr;
}
double* multiply(double* c1, double* c2)
{
 float ac = c1[0] * c2[0];
 float ad = c1[0] * c2[1];
 float bc = c1[1] * c2[0];
 float bd = c1[1] * c2[1] * - 1;
 float real_result = ac + bd;
 float imaginary_result = ad + bc;
 double* arr = new double[2];
 *(arr + 0) = real_result;
 *(arr + 1) = imaginary_result;
 return arr;
}
double* multiply(double* c1, double d1)
{
 float real_result = c1[0] * d1;
 float imaginary_result = c1[1] * d1;
 double* arr = new double[2];
 *(arr + 0) = real_result;
 *(arr + 1) = imaginary_result;
 return arr;
}
void show(double* result)
{
 if (result[1] >= 0)
 {
 cout << result[0] << '+' << result[1] << 'i' << endl;
 }
 else
 {
 cout << result[0] << result[1] << 'i' << endl;
 }
}
