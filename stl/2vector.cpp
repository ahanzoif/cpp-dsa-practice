// Vector is dynamic array

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;
    cout<< "Capacity -> " <<v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;


    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(4);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(5);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(6);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(7);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(8);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(9);
    cout << "Capacity -> " << v.capacity() << endl;
    cout << "Size -> " << v.size() << endl;

    cout << "Element at 4th Index -> " << v.at(4) << endl;

    cout << "Front -> " << v.front()<< endl;
    cout << "Last -> " << v.back() << endl;

    cout << "Before Pop -> " << endl;
    for(int i:v) {
        cout << i << " ";
    } cout << endl;

    v.pop_back();

    cout << "After Pop -> " << endl;
    for(int i:v) {
        cout << i << " ";
    } cout << endl;

    cout << "\nSize before clear -> " << v.size() << endl;
    v.clear();
    cout << "Capacity before clear -> " << v.capacity() << endl;

    cout << "\nSize after clear -> " << v.size() << endl;
    v.clear();
    cout << "Capacity after clear -> " << v.capacity() << endl;
    
}