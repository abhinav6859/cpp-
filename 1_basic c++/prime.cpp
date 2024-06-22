#include<iostream>
using namespace std;
int main (){
    int a,n;
    cout<<"enter ur number to check prime or not \n";
    cin>> n;
   for (int i = 2; i < n; i++)
   {
   if (n%i==0)
   {
    a=1;
    break;
   }
   else a=0;
   }
   if (a==1){
    cout<<" ur number is not a prime number \n";
   }
   else 
   cout << "ur number is prime \n";


}