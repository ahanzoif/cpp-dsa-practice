// Program: Reverse Array
// Topic: Arrays
// Technique: Two Pointer Technique
// Language: C++
// Author: Ahan Zoif
// Description: Reverses the elements of an array by swapping elements from start and end using the two-pointer technique.

#include <iostream>
using namespace std;

void reversearray(int arr[], int size)
{
    int start = 0, end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    reversearray(arr, size);
    cout << "Reverse Array is " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
