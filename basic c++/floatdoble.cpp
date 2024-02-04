
// float double and long double data dype

/*#include <iostream>
#include <iomanip>  //for setprecision
#include <limits>  //for numeric_limit


using namespace std;

int main(void)
{

    float x=3456.123f;
   double a=9.123456789;
long double aa= 999.12345678L;

cout <<setprecision(7);

    cout << "double a="<<a<<"\n";
   
    cout << "long double aa= "<<aa<<"\n";
    
    cout << "float x=  " << x<<"\n" ;

    cout << numeric_limits<float>::digits10;
}*/
#include <iostream>
#include <iomanip>
#include <limits> 

using namespace std;
int main(){

    //Declare and initialize the variables
    float number1 {1.12345678901234567890f}; // Precision : 7  after seven take garbage value
    double number2 {1.12345678901234567890}; // Precision : 15
    long double number3  {1.12345678901234567890L};
    
    //Print out the sizes
    cout << "sizeof float : " << sizeof(float) << endl;
    cout << "sizeof double : " << sizeof(double) << endl;
    cout << "sizeof long double : " << sizeof(long double) << endl;



    //Precision
    cout << setprecision(20); // Control the precision from cout.
    cout << "number1 is : " << number1 << endl; //7 digits
    cout << "number2 is : " << number2 << endl; // 15'ish digits
    cout << "number3 is : " << number3 << endl; // 15+ digits


    //Float problems : The precision is usually too limited
    //for a lot of applications
    float number4 = 192400023.0f;               // Error : narrowing conversion

    cout << "number4 : " << number4 << endl;


    //Scientific notation
    //What we have seen so far in terms of floating point types
    //is fixed notation. There is another notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent

    cout << "-------------------------" << endl;
    
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};           // Can ommit the lower 00023
                                        // for simplicity if our application allows that.
    double number8 {0.00000000003498};
    double number9 {3.498e-11}; // multiply with 10 exp(-11)
    
    cout << "number5 is : " << number5 << endl;
    cout << "number6 is : " << number6 << endl;
    cout << "number7 is : " << number7 << endl;
    cout << "number8 is : " << number8 << endl;
    cout << "number9 is : " << number9 << endl;



    //Infinity and Nan
    cout << endl;
    cout << "Infinity and NaN" << endl;
    
    double number10{ -5.6 };
    double number11{};//Initialized to 0
    double number12{};  //Initialized to 0

    //Infinity
    double result { number10 / number11 };
    
    
    cout << number10 << "/" << number11 << "  yields " << result << endl;
    cout << result << " + " << number10 << " yields " << result + number10 << endl;
    
    //NaN
    result = number11 / number12;
    
    
    cout << number11 << "/" << number12 << " = " << result << endl;
    
    cout << numeric_limits<double>::digits10<< endl;
    return 0;
}