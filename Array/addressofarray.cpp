// display adress of each element of an array 


#include <iostream>

using namespace std;

int main() {
 
    int test_scores [] {100, 90, 80,70, 60};
  
    cout << "\n array is:" << endl;
    for (int i=0;i<5;i++){
        cout << i+1 <<" . test_scores ["<<i <<"] : "<<test_scores[i] << endl;
    }
   
    

for (auto value : test_scores){
    cout << "value :"<< value << endl;
}

   // display  memory address or storage location where the array is located 
   for (int i=0;i<5;i++){
    cout << "\nNotice what the value of the array name is : " << &test_scores[i]  << endl;
    
   }
   // in this type of statemet show address of first location of an array 
    cout << "\nfirst element address  : " << test_scores  << endl;
    cout << endl;
    return 0;
}

