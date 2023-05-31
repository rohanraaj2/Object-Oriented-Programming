class Student
  {
 private:
 int student_ID;
 string first_name;
 string last_name;
 double exam_score;

 public:
 Student(int s_ID = 0, string first = "", string last = "", double marks =
0)
 {
 this -> student_ID = s_ID;
 this -> first_name = first;
 this -> last_name = last;
 this -> exam_score = marks;
 }
 void show()
 {
 cout << student_ID << endl;
 cout << first_name << endl;
 cout << last_name << endl;
 cout << exam_score << endl;
 }
 double get_score()
 {
 return exam_score;
 }
};
//2. Define the MinMax function here
Student* MinStudent(Student* arra, int size)
{
 Student* min{nullptr};
 min = arra;

 for (int i = 1; i < size; i++)
 {
 if (((*(arra + i)).get_score()) < (*min).get_score())
 min = arra + i;
 }
 return min;
}

Student* MaxStudent(Student* arra, int size)
{
 Student* max{nullptr};
 max = arra;

 for (int i = 1; i < size; i++)
 {
 if (((*(arra + i)).get_score()) > (*max).get_score())
 max = arra + i;
 }
 return max;
}
//3. Do the necessary steps in the main function
int main() {
 //1. create Student array of size n dynamically
 int n;
 cin >> n;
 int ID;
 string f_name;
 string l_name;
 double score;
Student* arr = new Student[n];
  for (int i = 0; i < n; i++)
 {
 cin >> ID;
 cin.ignore();
 getline(cin, f_name);
 getline(cin, l_name);
 cin >> score;
 //2. Read the Student information into the Student array
 *(arr + i) = Student (ID, f_name, l_name, score);
 }
 //3. Pass the student array to the MinStudent function and store returned
value in pointer of type Student
 Student ptr_min = *MinStudent(arr, n);
 //4. Pass the student array to the MaxStudent function and store returned
value in pointer of type Student
 Student ptr_max = *MaxStudent(arr, n);
 cout<<"Student with Minimum score:"<< endl;
 //5. Call Student's show() function to print the student information of
the object returned by MinStudent function.
 ptr_min.show();
 cout << endl;
 cout<<"Student with Maximum score:"<< endl;
 //6. Call Student's show() function to print the student information of
the object returned by MaxStudent function.
 ptr_max.show();
 //7. Delete the array
 delete[] arr;
 arr = nullptr;
}
