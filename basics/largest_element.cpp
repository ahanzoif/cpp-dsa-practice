#include <iostream>
// Program: Print Largest Element
// Topic: Basic Arrays
// Language: C++
// Author: Ahan Zoif

#include <climits>
using namespace std;

int main()
{
    int size = 6;
    int nums[] = {10, 60, 4, 90, -1, -92};

    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        largest = max(nums[i], largest);  // this line of code bypass the if condition 

        // if (nums[i] > largest)
        // {
        //     largest = nums[i];
        // }
    }
    cout << "Largest Element is = " << largest << endl;

    return 0;
}
