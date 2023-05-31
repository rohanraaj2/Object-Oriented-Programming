int sum = 0;
int countHoles(int num)
{
 int last = num % 10;
 if (last > 0)
 {
 if (last == 8)
 {
 sum += 2;
 }
 else if (last == 0 || last == 4 || last == 6 || last == 9)
 {
 sum += 1;
 }
 return countHoles(num / 10);
}
 return sum;
}
int countHoles(char* str)
{
 if (isalpha(*str) != 0)
 {
 if (*str == 'B')
 {
 sum += 2;
 }
 else if (*str == 'A' || *str == 'D' || *str == 'O' || *str == 'P' ||
*str == 'Q' || *str == 'R')
 {
 sum += 1;
 }
 return countHoles(str + 1);
 }
 return sum;
}
