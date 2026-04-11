#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Problem: Maximum Subarray Sum + Print Subarray
// Topic: Arrays
// Approach: Kadane's Algorithm with index tracking
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;
    int currSum = 0, maxSum = INT_MIN;
    int start = 0, end = 0, tempstart = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum > maxSum)
        {
            maxSum = currSum;
            start = tempstart;
            end = i;
        }

        if (currSum < 0)
        {
            currSum = 0;
            tempstart = i + 1;
        }
    }
    cout << "Maximum subarray sum = " << maxSum << endl;
    cout << "Subarray elements: " << endl;
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}