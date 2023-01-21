#include <iostream>
using namespace::std;
string correction(char s1[], string s2)
{
 for (int i = 0; i < 1000; i++)
 {
 if (s1[i] == 'A' || s1[i] == 'C' || s1[i] == 'G' || s1[i] == 'T')
 s2 += s1[i];
 else if (s1[i] == 'a' || s1[i] == 'c' || s1[i] == 'g' || s1[i] ==
't')
 s2 += toupper(s1[i]);
 else if (s1[i] == '\0')
 break;
 }
 return s2;
}
int main ()
{
 char s1[1000];
 string s2 = "";
 cin.get(s1, 1000);
 cout << correction(s1, s2);
}
