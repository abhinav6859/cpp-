//The functions for deque are same as vector, with an addition of push and pop operations for
 //both front and back.  
#include <iostream>
#include <deque> 


using namespace std;

int main() {
    deque<int>d {3,4,5,6,7};
  

d.push_back(1);
d.push_front(2);

 cout << "print last  :"<<endl;
 for (int i:d){
cout<< i<<" ";
}
 cout << endl;
 d.pop_back();
 for (int i:d){
cout<< i<<" ";
}

    cout << endl;
    return 0;
}
