// Program: Count Occurrence of Target Element
// Topic: Searching Algorithms
// Language: C++
// Author: Ahan Zoif
// Description: Traverses the array and counts the number of times the target element occurs.

#include <iostream>
using namespace std;

int appear(int arr[], int size, int target)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            count++;
            cout << "Target found at index " << i << endl;
        }
    }
    return count;
}

int main()
{
    int arr[] = {4, 2, 7, 2, 1, 2, 5};
    int size = 7;
    int target = 2;

    cout << "Target appear " << appear(arr, size, target) << " times" << endl;
    
    return 0;
}
