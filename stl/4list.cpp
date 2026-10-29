// List ki implementation doubly linkedlist ke thorugh hoti hai.
//Double Linkedlist -> have 2 pointers of Front and Back

#include <iostream>
#include<list>
using namespace std;

int main() {

    list<int> l;

    // list<int> n(l);
    // copy old list in new list.

    list<int> n(5, 100);
    for(int i: n){
        cout<<"Printing n -> " << i << endl;
    }

    l.push_back(1);
    l.push_front(2);

    for(int i : l)
    {cout <<i<< " ";}
}