using namespace std;
int countHoles(int num){
 //int number_of_digits = 1;
 //int new_num;
 int num_of_holes = 0;
 int last_digit;
 while (num > 0)
 {
 last_digit = num % 10;
 num = num / 10;
 if (last_digit == 0 || last_digit == 4 || last_digit == 6 ||
last_digit == 9)
 {
 num_of_holes += 1;
 }
 else if (last_digit == 8)
 {
 num_of_holes += 2;
 }
 }
 //new_num = num;
 //while (new_num >= 10)

 //return number_of_digits;
 //return (num % 10);
 return num_of_holes;
}
