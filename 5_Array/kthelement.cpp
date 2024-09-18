//Write a C++ program to find the k largest elements in a given array of integers.



#include<iostream>

using namespace std;
int main (){
    int temp,i,k;
    cout<<"enter k value :";
    cin>> k;
    int arr[] {6,34,12,65,3,84,90};
   int n=sizeof(arr)/sizeof(arr[0]);
   
   /* There should be atleast two elements */
    if (n < k) // Checking if the array has less than 2 elements
    {
        cout << " Invalid Input "; 
      
    }
 
   
   for (int i=0;i<n;i++){

    for ( int j = i+1; j < n; j++)
    {
      if(arr[i]<arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
    
   }



cout <<"largest "<<k<<" element \n";
for ( i = 0; i < k; i++)
{
    cout << arr[i]<< " ";
}


}