// // product of array except itself
 
//  // for example 
//  //if input is [1,2,3,4]
//  //output [24,12,8,6]



 #include<iostream>
  #include<vector>
 using namespace std;
 int main () 

 {
 
 
 //Sum up scores array, store result in sum
 
    int scores [] {1,2,3,8};
    int sum {1};
    
    for( int i=0;i<4;i++){
        sum*=scores[i];
        
    }
     for( int i=0;i<4;i++){
        scores[i]=sum/scores[i];
        
    }
 cout << "scores = ";
    for (int v : scores){
        cout << v << " ";
    }
  
    cout <<"\n";
    return 0;
 }
