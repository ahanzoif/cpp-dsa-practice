// Program: First Occurrence in Array
// Topic: Searching Algorithms
// Language: C++
// Author: Ahan Zoif
// Description: Finds the first index where the target element appears in the array.

#include <iostream>
using namespace std;

int firstOccurance(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
        }
    return -1;
}

int main()
{
    int arr[] = {4, 2, 7, 2, 1, 2, 5};
    int size = 7;
    int target = 2;

    cout << "First Occurance is " << firstOccurance(arr, size, target) << endl;
    return 0;
}
