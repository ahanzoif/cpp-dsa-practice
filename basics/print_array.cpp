// Program: Print Array Elements
// Topic: Basic Arrays
// Language: C++
// Author: Ahan Zoif

#include <iostream>
using namespace std;

int main()
{

    int marks[5] = { 99, 77, 88, 100, 49};
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        cout << "Marks = " << marks[i] << endl;
    }
    

    return 0;
}
