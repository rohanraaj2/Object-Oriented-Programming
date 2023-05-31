#include<iostream>
using namespace std;

void display_vector (int *vector3, int n)
{
    for (int i = 0; i < n; i++) 
    {
        cout << (*(vector3 + i)) << endl;
    }
}

int* create_vector(int n)
{
    int *vector = new int[n];
    int value;
    for (int i = 0; i < n; i++) 
    {
        cin >> value;
        *(vector + i) = value;
    }
    return vector;
}

int* vector_addition(int* vector1, int* vector2, int n)
{
    int *vector3 = new int[n];
    for (int i = 0; i < n; i++) 
    {
        *(vector3 + i) = (*(vector1 + i) + *(vector2 + i));
    }
    return vector3;
}

int* vector_subtraction(int vector1[], int vector2[], int n)
{
    int *vector3 = new int[n];
    for (int i = 0; i < n; i++) 
    {
        *(vector3 + i) = (*(vector1 + i) - *(vector2 + i));
    }
    return vector3;
}


int main ()
{
    int n;
    int *vector1;
    int *vector2;
    cout << "dimension:";
    cin >> n;
    vector1 = create_vector(n);
    vector2 = create_vector(n);
    int *vector3 = new int[n];
    char op; 
    cout << "operator:";
    cin >> op;
    if (op == '+')
    {
        vector3 = vector_addition(vector1, vector2, n);
    }
    else if (op == '-')
    {
        vector3 = vector_subtraction(vector1, vector2, n);
    }
    display_vector (vector3, n);
}
