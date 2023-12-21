
// Global and local variables 

#include <iostream>
 
using namespace std;

int age (18); // Global variables are automatically initiallized to zero when local variable present
 
int main(void) {
  
   int age {16};  // local variable 
     //if local variable will not present then compiler execute our global variable
    
    cout << age <<  endl;
    
  
}

