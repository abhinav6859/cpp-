// Section 8
// Mixed Type Expressions
/*
    Ask the user to enter 3 integers
    Calculate the sum of the integers then
    calculate the average of the 3 integers.
    
    Display the 3 integers entered
    the sum of the 3 integers and
    the average of the 3 integers.
*/

#include <iostream>

using namespace std;

int main() {
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    average = static_cast<double>(total) / count;  //it checks to make sure that it can be 
      //  converted to a double.   (perfect for use .)
   double average1 = (double)total/count; // Old-Style    this kind of cast just assumes
   //  that whatever total is  ,is going to be converted to a double
    
    
    cout << "The 3 numbers were: "<< num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;
     cout << "The average1 of the numbers is: " << average1 << endl;

    cout << endl;
    return 0;
}
