#include <iostream>
#include <vector>
using namespace std;

// Topic: STL Vector Basics
// Concept: Size vs Capacity
// Time Complexity: O(1) for push_back (amortized)

int main()
{
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(20);
    vec.push_back(10);
    vec.push_back(10);
    vec.push_back(10);

    cout << "Size of vector is = " << vec.size() << endl; //5
    cout << "Capacity of vector is = " << vec.capacity() << endl; //8
    return 0;
}