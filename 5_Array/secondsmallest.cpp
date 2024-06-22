// Write a C++ program to find the second smallest elements in a given array of integers.

#include<iostream>
using namespace std;
int main (){
    int i, arr[] {8,56,2,6,2,3,4,76,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    if (n<2){
        cout<<" invalid array ";
    }
    int first =arr[0]; 
     int second =arr[0]; 
 for ( i=0;i<n;i++){
    if (first > arr[i]){
    second=first;
    first=arr[i];

    }
    else if(second>arr[i] && first!=arr[i])
    {
        second =arr[i];
    }
 }


//  for ( i=0;i<n;i++){
//     if (first !=arr[i] && second >arr[i]){
//     second=arr[i];
//  }}

 cout<<second <<"\n";
}