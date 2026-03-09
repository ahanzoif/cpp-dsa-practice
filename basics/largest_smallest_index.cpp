// Program: Print Largest & Smallest Elements
// Topic: Basic Arrays
// Language: C++
// Author: Ahan Zoif

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size = 6;
    int nums[] = {50, 3,  160, 200, 1, 20};

    int largest = INT_MIN;
    int largestIndex = -1;

    int smallest = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
            largestIndex = i;
        }

        if (nums[i] < smallest)
        {
            smallest = nums[i];
            smallestIndex = i;
        }
    }

    cout << " Largest Element is = " << largest << endl;
    cout << " Largest Index is = " << largestIndex << endl;

    cout << " Smallest Element is = " << smallest << endl;
    cout << " Smallest Index is = " << smallestIndex << endl;

    return 0;
}
