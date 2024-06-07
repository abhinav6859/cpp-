#include <iostream>
#include <math.h>


using namespace std;
int main(){
    int binary;
    cout<< " give binary number :";
    cin>> binary;
    int ans=0;
     int i=0;

    while (binary!=0)

    {
        
       int a=binary%10;
        if (a){
ans=pow(2,i)+ans;}
 i++;
       binary=binary/10;
    }
    cout<< ans <<"\n";
}