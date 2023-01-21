#include<iostream>
using namespace std;

int my_strlen(char* cstring)
{
    int length = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (*(cstring + i) == '\0')
        {
            break;
        }
        else 
        {
            length += 1;
        }
    }
    return length;
}

void reverse_printing(char* cstring)
{
    int length = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (*(cstring + i) == '\0')
        {
            length = i;
        }
    }
    for (int i = length; i > 0; i--)
    {
        cout << *(cstring + i);
    }
}

void reverser(char* cstring)
{
    int length = 0;
    char new_string;
    for (int i = 0; i < 1000; i++)
    {
        if (*(cstring + i) == '\0')
        {
            length = i;
        }
    }
    for (int i = length; i > 0; i--)
    {
        new_string += *(cstring + i);
    }
}

string merger(char* string1, char* string2)
{
    for (int i = 0; i < 1000; i++)
    {
        if (*(string2 + i) == '\0')
        {
            break;
        }
        else 
        {
            string1 += *(string2 + i);
        }
    }
    return string1;
}

int length_checker(char* string1, char* string2)
{
    int length1, length2 = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (*(string1 + i) == '\0')
        {
            break;
        }
        else 
        {
            length1 += 1;
        }
    }
    for (int i = 0; i < 1000; i++)
    {
        if (*(string2 + i) == '\0')
        {
            break;
        }
        else 
        {
            length2 += 1;
        }
    }
    if (length1 == length2)
        return 0;
    else if (length1 > length2)
        return -1;
    else if (length2 > length1)
        return 1;
}

bool contains(char* cstring, char c)
{
    for (int i = 0; i < 1000; i++)
    {
        if (*(cstring + i) == '\0')
        {
            break;
        }
        else if (*(cstring + i) == c)
            return true;
    }
    return false;
}

bool check_for_palindrome (char* cstring)
{
    int length = 0;
    char* new_string = "";
    for (int i = 0; i < 1000; i++)
    {
        if (*(cstring + i) == '\0')
        {
            length = i;
        }
    }
    for (int i = length; i > 0; i--)
    {
        new_string += *(cstring + i);
    }
    if (new_string == cstring)
        return true;
    else
        return false;
}
int main()
{
    char text[1000];
    char* cstring = new char[1000];
    cin.get (text, 1000);
    cstring = text;
    cout << cstring;
    my_strlen(cstring);
}