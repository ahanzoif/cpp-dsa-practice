#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Problem: Maximum Subarray Sum (Kadane's Algorithm)
// Topic: Arrays
// Approach: Kadane's Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << "Maximum subarray sum = " << maxSum << endl;

    return 0;
}