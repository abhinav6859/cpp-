// C++ program to demonstrate the creation of descending
// Sets are a type of associative container in which each element has to be unique 
//because the value of the element identifies it.

// order set container
#include <iostream>
#include <set>
using namespace std;

int main()
{
cout<<"increasing order \n";
    set<int > s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);
    s1.insert(10);    // not taken because it already present .
    for (auto i : s1) {
        cout << i << ' ';
    }
    cout<<endl;
    // descending order
    cout<<"decreasing order \n";
     set<int, greater<int> > s2;
    s2.insert(10);
    s2.insert(5);
    s2.insert(12);
    s2.insert(4);

    for (auto i : s2) {
        cout << i << ' ';
    }
    return 0;
}
