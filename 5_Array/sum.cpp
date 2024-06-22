 #include<iostream>
 using namespace std;
 int main () 

 {
 
 
 //Sum up scores array, store result in sum
 
    int scores [] {2,5,8,2,5,6,9};
    int sum {0};
    
    for( int element : scores){
        sum += element;
    }
    cout << "Score sum : " << sum << endl;
  
    cout <<"\n";
    return 0;
 }