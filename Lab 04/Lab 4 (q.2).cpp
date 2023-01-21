#include<iostream>
using namespace std;

int* creating_array(int n)
{
    int *array = new int[n];
    return array;
}

void populating_array(int* arr, int n)
{
    for (int i = 0; i < n; i++) 
    {
        *(arr+i) = rand();
    }
}

void display_array(int *arr, int n)
{
    for (int i = 0; i < n; i++) 
    {
        cout << *(arr+i) << endl;
    }
}

int main()
{
    int n;
    int *arr;
    cin >> n;
    arr = creating_array(n);
    populating_array(arr, n);
    display_array(arr, n);
    delete[] arr;
    arr = nullptr;
}