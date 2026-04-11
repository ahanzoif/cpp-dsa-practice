#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem: Majority Element
// Topic: Arrays
// Approach: Sorting
// Time Complexity: O(n log n)
// Space Complexity: O(1)

int main()
{
    vector<int> nums = {1, 2, 2, 1, 1};  
    int n = nums.size();

    sort(nums.begin(), nums.end());  

    int freq = 1;
    int ans = nums[0];

    for (int i = 1; i < n; i++) 
    {
        if (nums[i] == nums[i - 1]) 
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n/2)     
        {
            cout << "Majority Element : " << ans << endl;
            cout << "Number of frequency : " << freq << endl;
        }
        
    }

    return 0;
}