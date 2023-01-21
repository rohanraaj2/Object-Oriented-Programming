#include<cmath>
int RemoveDuplicates(int* arr, int size)
{
 int new_size;
 if (size >= 1 && size <= 3 * pow(10, 4))
 {
 int highest = -1000;
 int i = 0;
 while (i < size)
 {
 int j = i + 1;
 if (arr[i] >= -100 && arr[i] <= 100 && j < size)
 {
 while (arr[j] <= arr[i] && j < size - 1)
 {
 j++;
 }
 if (j < size && arr[j] > highest)
 {
 highest = arr[j];
 new_size = i + 2;
 arr[i + 1] = arr[j];
 }
 else
 {
 arr[i + 1] = 0;
 }
 }
 i++;
 }
 }
 return new_size;
}
