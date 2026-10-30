// in map our data is store in (key : value) pair
// keys are unique, one key only point one value.
// value can be same not key
// it return sorted values

#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int,string> m;

    m[1] = "kaif";
    m[3] = "marriage";
    m[2] = "sucess";
  //key     value

    m.insert({5, "chutki"});

    for(auto i:m) {
        cout <<i.first<<" "<<i.second<< endl;
    }cout << endl;

    cout<<"finding 5 -> "<<m.count(5)<<endl;
}