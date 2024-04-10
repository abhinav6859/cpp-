//Input an array and  arrange element in assending and desending order 

#include<iostream>
using namespace std;
int main ()
{
    int arr[7] {3,4,5,1,7,2,8};
   int temp,i;
  // for taking input from user 
    // for(int i=0;i<7;i++){
    //  cout<< "arr["  <<i<<"] :" ;
    // cin>>arr[i];
    // }
     

    for (int i = 0; i < 7; ++i) {
         for (int j = i+1; j < 7; ++j){
        
        if (arr[i] > arr[j]) {
           temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
        }
         }
       
    }
  for ( i=0;i<7;i++) {
 cout<<arr[i];
 }

cout<<"\n";


// for desending order 
 for (int i = 0; i < 7; ++i) {
         for (int j = i+1; j < 7; ++j){
        
        if (arr[i] < arr[j]) {
           temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
        }
         }
       
    }
  for ( i=0;i<7;i++) {
 cout<<arr[i];
 }
}