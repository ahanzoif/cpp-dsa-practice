// Program: Print Smallest Elements
// Topic: Basic Arrays
// Language: C++
// Author: Ahan Zoif

#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int nums[] = {5, 15, 22, -1, -15, -24};
    int size = 6;

    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
      
        smallest = min(nums[i], smallest);   //  this line of code bypass the if condition 
      
        // if (nums[i] < smallest)
        // {
        //     smallest = nums[i];
        // }
    }
    cout << "Smallest Element is = " << smallest << endl;

    return 0;
}
