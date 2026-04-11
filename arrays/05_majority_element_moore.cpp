#include <iostream>
#include <vector>
using namespace std;

// Problem: Majority Element
// Topic: Arrays
// Approach: Moore's Voting Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    vector<int> nums = {1, 2, 2, 1, 1};
    int n = nums.size();

    int freq = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }

        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    cout << "Majority element is : " << ans << endl;

    return 0;
}