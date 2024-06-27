
#include <iostream>
#include <vector>   // don't forget this in order to use vectors

using namespace std;

int main() {
    vector<int>v;
    // capacity means capable for store
    // size means total element
    cout << "capacity :"<<v.capacity()<<endl;

v.push_back(1);
 cout << "capacity :"<<v.capacity()<<endl;

 v.push_back(2);
 cout << "capacity :"<<v.capacity()<<endl;

 v.push_back(3);  // when we enter 3 it's capacity 4 ,it's mean when vector full then it doubles its capacity
 cout << "capacity :"<<v.capacity()<<endl;

cout << "element at second index :"<< v.at(2)<<endl;

cout<< "first element:"<<v.front()<< endl;
cout<< "last element:"<<v.back()<< endl;

// pop_back() for remove from last
cout << "before pop back \n";
for (int i:v){
cout<< i<<"\n";
}
 v.pop_back();
 cout << "now element  :"<<endl;
 for (int i:v){
cout<< i<<"\n";
}

vector<int>a(5,1);

vector<int>last(a);
cout << "print last  :"<<endl;
 for (int i:last){
cout<< i<<"\n";
}

    cout << endl;
    return 0;
}
