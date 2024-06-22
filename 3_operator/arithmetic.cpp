// Arithmetic operators
/*
    +   addition
    -   subtraction
    *   multiplication
    /   division
    %   modulo or remainder  (works only with integers)
    
    +, -. * and /  operators are overloaded to work with multiple types such as int, double, etc.
    %  only for integer types
*/


#include <iostream>
#include <cmath>

using namespace std;
int main(){
   
   //Addition
   int number1{2};
   int number2{7};

   int result = number1 + number2;
   cout << "result : " << result << endl;

    //Subtraction
    result = number2 - number1 ;
   cout << "result : " << result << endl;

   result = number1 - number2;
   cout << "result : " << result << endl;

   //Multiplication
   result = number1 * number2;
   cout << "result : " << result << endl;


   //Division
   result = number2 / number1;
   cout << "result : " << result << endl;


   //Modulus
   result = number2 % number1; // 7 % 2
   cout << "result : " << result << endl; // 1

   result = 31 % 10;
   cout << "result : " << result << endl; // 1
    
      //log10 , 10 ^ 4 = 10000  , to get 10k , you'd need to elevate 10 to the power of ? , this is log in base 10
    cout << "To get 10000, you'd need to elevate 10 to the power of : "
                 << log10(10000) << endl; // 4



    //sqrt
    cout << "The square root of 81 is : " << sqrt(81) << endl;
    


   
 //exp : f(x) = e ^ x , where e = 2.71828 . Test the result here against a calculator
    double exponential = exp(10);
    cout << "The exponential of 10 is : " << exponential << endl;
    
    //pow
    cout << "3 ^ 4 is : " << pow(3,4) << endl;
    cout << "9^3 is : " << pow(9,3) << endl;


    return 0;
}

