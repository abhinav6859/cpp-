// rotate the given vector " a" by k steps ,where k is non negative .
// k can be greater than n as well where n is the size of vector " a".



#include <iostream>
#include <vector>  

using namespace std;

int main() {

int n,k;
cout<< "size of vector is" << endl;
cin>> n ;

  vector <int> vec(n) ;

cout<< "give elements of vector" << endl;
for(int i=0;i<n;i++){
cin >> vec.at(i) ;
}

cout<< "how much vecor rotate " << endl;
cin>> k;
if (k>=n){
    k=k%n;
 }
 cout <<k <<"\n";

for (int i = 0; i < k; i++)
{
   vec.push_back(vec.at(i));
 
  
}
for (int i = 0; i <k; i++)
{
    vec.erase(vec.begin()) ;
}


cout<< "modify vector is " << endl;
for(int i=0;i<n;i++){
cout<< vec.at(i) <<" ";
}



}