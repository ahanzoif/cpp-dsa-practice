#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec; // size 0
    // cout << vec[0];

    // vector<int> vec = {1, 2, 3};
    // cout << vec[2] << endl;

    // vector<int> vec (5,4);
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;

    // vector<int> nums = {10, 20, 30, 40, 50, 60, 70};

    // for (int x : nums)
    // {
    //     cout << x << " ";
    // }

    vector<int> nums;

    cout << "size = " << nums.size() << endl; // this line of code use to find size of vector

    nums.push_back(25);
    nums.push_back(40);
    nums.push_back(55);

    cout << "after push back size = " << nums.size() << endl;

    nums.pop_back();
    cout << "after pop back size = " << nums.size() << endl;

    for (int x : nums)
    {
        cout << x << "\n";
    }

    cout << "The Front Element is = " << nums.front() << endl;

    cout << "The Last Element is = " << nums.back() << endl;

    
    return 0;
}