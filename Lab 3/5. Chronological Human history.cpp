using namespace::std;
void input_years(int yrs[], int num_yrs)
{
 for (int i = 0; i < num_yrs; i++)
 {
 cin >> yrs[i];

 while (yrs[i] < 0 || yrs[i] > 9999)
{
 cout << "Year can be between 0 and 9999! Try Again!" << endl;
 cin >> yrs[i];
 }
 }
}
void print_yrs_array(int yrs[], int num_yrs)
{
 for (int i = 0; i < num_yrs; i++)
 {
 if (i == num_yrs - 1)
 cout << yrs[i] << endl;
 else
 cout << yrs[i] << ", ";
 }
}
void chronological_order(int yrs[], int num_yrs)
{
 for (int i = 0; i < num_yrs - 1; i++)
 {
 for (int j = 0; j < num_yrs - i - 1; j++)
 {
 if (yrs[j] > yrs[j + 1])
 {
 int temp = yrs[j];
 yrs[j] = yrs[j + 1];
 yrs[j + 1] = temp;
 }
 }
 }
}
int main()
{
 int num_yrs;
 cin >> num_yrs;
 while (num_yrs < 2)
 {
 cout << "Need at least 2 years to sort! Try Again!" << endl;
 cin >> num_yrs;
 }
 int yrs[num_yrs];
 input_years(yrs, num_yrs);
 cout << "The initial array is: ";
 print_yrs_array(yrs, num_yrs);
 chronological_order(yrs, num_yrs);
 cout << "The sorted array is: ";
 print_yrs_array(yrs, num_yrs);
}
