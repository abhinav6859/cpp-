// Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
// Sample Output:
// without using two loop
// Input number of terms: 5
// 1 + 11 + 111 + 1111 + 11111
//The sum of the series is: 12345

#include <iostream>
using namespace std;

int main (){
    int n;
    int l=0;
    int k=1;
    int sum=0;
cout << "input number of terms :" ;
cin>> n;
for (int i=1;i<=n;i++){
    

k=l*10+1;
l=k;
sum =k+sum;
}
cout << sum <<"\n";

return 0;
}