//Write a C++ program to find the second largest elements in a given array of integers.

#include<iostream>
#include<climits>
using namespace std;
int main (){
    int first,second;
    int arr[] {6,34,12,65,78,84,90};
   int n=sizeof(arr)/sizeof(arr[0]);
   
   /* There should be atleast two elements */
    if (n < 2) // Checking if the array has less than 2 elements
    {
        cout << " Invalid Input "; // Output message for invalid input
      
    }
   first= second=INT_MIN;
 for(int i=0;i<n;i++){
    if(first < arr[i]){
        second=first;
        first=arr[i];

    }
    else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i]; // Updating second largest element
        }

 }

cout<< second;



}