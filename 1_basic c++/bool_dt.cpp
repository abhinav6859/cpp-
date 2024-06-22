
// bool and void  data dype

#include <iostream>

using namespace std;


int main(void)
{
//bool b=false;
//cout<<b<<"\n";
   void *ptr;
   int x=10;
   ptr=&x;cout<<*(int*)ptr<<endl;
    cout << sizeof(bool)<<endl;
   // bool b=45;
    //cout <<b<<"\n"; //only print 1 for true and 0 for false
}