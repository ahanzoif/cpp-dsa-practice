#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// Problem: Maximum Subarray Sum
// Topic: Arrays
// Approach: Optimized Brute Force (Using prefix idea without extra space)
// Time Complexity: O(n^2)
// Space Complexity: O(1)

int main ()
{
    int n = 5;
    int arr[5] = {1, -2, 3, 4, 5};

    int maxSum = INT_MIN;

    for(int st=0; st<n; st++)
    {
        int currSum = 0;
        for(int end=st; end<n; end++)
        {
            currSum +=arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum << endl; 
    return 0;
}