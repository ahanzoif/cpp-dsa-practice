// in deque starting and ending dono mein Insertion or Deletion kr skte hai...

#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }

    // d.pop_front();
    // cout<< endl;
    // for(int i: d) {
    //     cout << i <<" ";
    // }
    cout << "\n";
    cout << "First index element -> " << d.at(0) << endl;
    cout << "2nd index element -> " << d.at(1) << endl;

    cout << "Front -> " << d.front() << endl;
    cout << "Second -> " << d.back() << endl;

    cout << "Empty or not -> " << d.empty() << endl;
    cout << "\n";

    cout << "Size before erase -> " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "Size after erase -> " << d.size() << endl;
    for (int i : d)
    {
        cout << "Now the Size is -> "<< i << " ";
    }

    return 0;
}
