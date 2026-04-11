#include <iostream>
#include <vector>
using namespace std;

// Problem: Majority Element
// Topic: Arrays
// Approach: Brute Force (Frequency Count)
// Time Complexity: O(n^2)
// Space Complexity: O(1)

int main()
{
    vector<int> nums = {1, 2, 2, 1, 1}; 
    int n = nums.size();                
    for (int val : nums)
    {
        int freq = 0;
        for (int el : nums)
        {
            if (el == val)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            cout << "Majority Element : " << val << endl;
            cout << "Frequency of element is = " << freq << endl;
            break;
        }
    }
    return 0;
}
