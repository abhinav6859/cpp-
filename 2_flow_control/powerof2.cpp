// Given an integer n, cout<< n <<" is power of 2\n" if it is a power of two. Otherwise, cout<< n <<" is not a power of two \n".

// An integer n is a power of two, if there exists an integer x such that n == 2^x.

 

// Example 1:

// Input: n = 1
// Output: n <<" is power of 2\n"
// Explanation: 2^0 = 1

#include<iostream>
#include<math.h>
 using namespace std;
 int main(){
    int n;
    cout << "enter ur number \n";
    cin>>n;
    if (n==1){
        cout<< n <<" is power of 2\n";
    }
    if (n<=0){
        cout<< n <<" is not a power of two \n";
    }
    else {
       
         long double a = log2(n);
        long int b=(int)a;
        if (a==b){
            cout<< n <<" is power of 2\n";
        }
        else 
        cout<< n <<" is not a power of two \n";
    }
 }