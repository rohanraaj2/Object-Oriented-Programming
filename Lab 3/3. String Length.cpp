#include <iostream>
using namespace::std;
int string_length(char txt[])
{
 int c = 0;
 for (int i = 0; i < 1000; i++)
 {
 if (txt[i] != '\0')
 c += 1;
 else
 break;
 }
 return c;
}
int main()
{
 char txt[1000];
 cin.get(txt, 1000);
 cout << string_length(txt);
}
