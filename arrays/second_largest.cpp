// Program: Second Largest Element in Array
// Topic: Arrays
// Technique: Linear Traversal
// Language: C++
// Author: Ahan Zoif
// Description: Traverses the array to find the largest and second largest elements without sorting.

#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int size)
{
    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }

        else if (arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

int main()
{

    int arr[] = {10, 60, 4, 90, 1};
    int size = 5;

    cout << "Second Largest = " << secondLargest(arr, size) << endl;

    return 0;
}
