// Queue -> FIFO

#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<string> q;

    q.push("carrer");
    q.push("responsibility");
    q.push("happines");

    cout << "Size before pop -> " << q.size() << endl;

    cout << "First Element -> " << q.front() << endl;
    q.pop();
    cout << "First Element After Pop -> " << q.front() << endl;
    cout << "Size after pop -> " << q.size() << endl;
}