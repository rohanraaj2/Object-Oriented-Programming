#include<iostream>
using namespace std;

int count_even(int* arr, int n) 
{
    int counter = 0;
    for (int i = 0; i < n; i++) 
    {
        if (*(arr + i) % 2 == 0)
        {
            counter += 1;
        }
    }
    //cout << counter << "even";
    return counter;
}

double* max_value(double* arr, int n)
{
    double* p = new (nothrow) double[n];
    //p[n] = {1, 6, 2, 8, 4};
    double highest = arr[0];
    double* index_of_highest;
    if (n >= 1)
    {    
        for (int i = 0; i < n; i++) 
        {
            if (*(arr + i) > highest)
                highest = *(arr + i);
        }
        //cout << "highesy" << highest;
        return index_of_highest;
    }
    else
    {
        p = nullptr;
        return NULL;
    }
}

int* another_array(int* arr, int n)
{
    int *arr2 = new int[n];
    for (int i = 0; i < n; i++) 
    {
        *(arr2 + i) = *(arr + i);
        //cout << *(arr2 + i) << endl;
    }
    //cout << "Arr" << arr2;
    return arr2;
}

void swapper(int* arr1, int* arr2, int n)
{
    int temp;
    for (int i = 0; i < n; i++) 
    {
        temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
        // cout << *(arr1 + i) << endl;
        // cout << *(arr2 + i) << endl;
    }
}

int main()
{
    int n;
    int value;
    int value2;
    cin >> n;
    int *arr = new int[n];
    int *arr2 = new int[n];
    double *arr_for_max = new (nothrow) double[n];

    for (int i = 0; i < n; i++) 
    {
        cin >> value;
        *(arr + i) = value;
    }
    for (int i = 0; i < n; i++) 
    {
        cin >> value2;
        *(arr2 + i) = value2;
    }
    count_even(arr, n);
    max_value(arr_for_max, n);
    another_array(arr, n);
    swapper(arr, arr2, n);
}