

#include <iostream>
#include <array>
using namespace std;

int main() {
    
    int basic [3]={1,2,3};
  array<int,4>a={1,2,3,4};   // stl array ,it is satatic
   
int size=a.size();
for (int i=0;i<size;i++){
    cout << a[i]<< endl;
}

cout<< "element at second index :"<<a.at(2)<< endl;

cout<< "Empty or not :"<<a.empty()<< endl;

cout<< "first element:"<<a.front()<< endl;
cout<< "last element:"<<a.back()<< endl;

    cout << endl;
    return 0;
}

