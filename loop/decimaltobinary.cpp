#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int ans =0;
    int n;
    int i=0;
cout<<"enter ur number :";
cin>>n;
while (n!=0)

{
  int   bits=n&1;
  
   ans=(bits * pow(10,i))+ans;
   n= n>>1;
    i++;
}


cout<< ans ;
cout<< endl;
 }