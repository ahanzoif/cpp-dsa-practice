// set store unique element, modifiy in element is not allowed,
// element return in sorted order

#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(2);
    s.insert(2);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    s.erase(next(s.begin(), 0));
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    cout << "5 is present or not -> " << s.count(5) << endl;

    set<int>::iterator it = s.begin();
    it++;

    set<int>::iterator itr = s.find(5);
    cout << "value present at itr -> " << *itr << endl;
}