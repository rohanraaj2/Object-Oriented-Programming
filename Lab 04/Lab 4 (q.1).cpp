#include<iostream>
using namespace std;
void character_adressing (char str1[])
{
    cout << str1 << endl;
    char *p = &str1[0];
    cout << (void*)str1 << endl;
}

int main()
{
    char str1[] = "hello everyone!";
    character_adressing(str1);
}
