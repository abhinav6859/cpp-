#include <iostream>
#include <array>
using namespace std;
int main(){


    int arr[] = {10, 20, 30, 40 ,76,50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Size of the array: " << size << endl;

   



   int scores [] {1,2,5};

   
 //   int count { size(scores)}; // size( C++1
// cout <<"no. of  elements  of scores are "<< count ;

   //Range based for loop
    for ( auto i : scores){
            cout << "value  : " << i << endl;       
    }
}
 

    
  
