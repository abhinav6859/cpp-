
// difference between product and sum of digits of an integer
#include <iostream>
using namespace std;

int main (){


    int n;
    cout << " give ur number \n";
    cin>> n;
        int c=1,d=0;
        while(n!=0){
        int    a=  n%10;
           
           c=a*c;
           d=a+d;
           n=n/10;
        }
        cout <<" ur ans   "<< c-d<<"\n";
        return 0;
    }
