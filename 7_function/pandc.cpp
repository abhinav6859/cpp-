#include<iostream>
using namespace std;


 int factorial( int x)
 {
    int factorial=1;
    for (int i=2;i<=x;i++){
    factorial=factorial*i;}
    return factorial;}

int main(void)
{int n,r;
   cout<<"enter n\n";
   cin>>n;
    cout<<"enter r\n";
   cin>>r;
  int ncr;
    ncr =factorial(n)/(factorial(r)*factorial(n-r));
    cout <<ncr;}