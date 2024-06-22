#include<iostream>
using namespace std;
bool isPrime(int n)   // both n are not same , it's a local variable


{
   for (int i=2;i<n;i++){
    if (n%i==0){
    return 0;
    }
    
   }return 1;
}
int main ()
{
    int n;
    cout << "give number for check \n";
 cin >> n;
  if(isPrime(n)) {
        cout <<" is a Prime number " <<endl;
   }
   else{
       cout<< "Not a prime number "<<endl;

   }
}
