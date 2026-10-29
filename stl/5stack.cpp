// stack -> LIFO

#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<string> s;
    s.push("Parents");
    s.push("Sucess");
    s.push("Love");

    cout << "Top Element -> " << s.top() << endl;
    s.pop();
    cout << "Top Element -> " << s.top() << endl;
    cout << "Size of Stack -> " << s.size() << endl;
    s.pop();
    cout << "Top Element -> " << s.top() << endl;
    cout << "Size of Stack -> " << s.size() << endl;
}