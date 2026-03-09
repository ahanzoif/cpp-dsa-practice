// Program: Last Occurrence in Array
// Topic: Searching Algorithms
// Language: C++
// Author: Ahan Zoif
// Description: Traverses the array and returns the last position of the target element if found.

#include <iostream>
using namespace std;

int lastOccurance(int arr[], int size, int target)
{
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            index = i;
        }
    }
    return index;
}
int main()
{
    int arr[] = {4, 2, 7, 2, 1, 2, 5};
    int size = 7;
    int target = 2;

    cout << "Last occurance is " << lastOccurance(arr, size, target) << endl;
    return 0;
}
