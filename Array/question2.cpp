// Write a C++ program to find the largest three elements in an array.

#include<iostream>
#include<climits> 
using namespace std;
int main ()
{
   
    int arr[7] {3,2,5,6,8,12,45};
   int i,temp;
    for (int i = 0; i < 7; ++i) {
         for (int j = i+1; j < 7; ++j){
        
        if (arr[i] < arr[j]) {
           temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
        }
         }
       
    }
  for ( i=0;i<3;i++) {
 cout<<arr[i] <<" ";
 }
   
}