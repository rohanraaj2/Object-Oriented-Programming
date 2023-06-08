#include<iostream>
using namespace std;


void func(int* p, int size)
{
    *p = 11;
} // p going out of scope here. The memory it was pointing to (A[i]) is not deallocated.

int main()
{
    int A[4];
    int* A_ptr{ A };

    for (int i{0}; i<4; i++)
    {
        func(A_ptr+i, 4);   // copy of A_ptr is passed to the function
    }
   
    for (int i{0}; i<4; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}