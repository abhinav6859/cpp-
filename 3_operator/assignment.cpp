#include <iostream>
using namespace std;
int main(){

	int var1{123}; // Declare and initialize
    cout << "var1 : "  << var1 << endl;
    
    var1 = 55; // Assign
    cout << "var1 : "  << var1 << endl;
    
    cout << endl;

    cout << "----------------" << endl;

    double var2 {44.55}; // Declare and initialize
    cout << "var2 : " << var2 << endl;
    
    var2 = 99.99; // Assign
    cout << "var2 : " << var2 << endl;
    
    cout << endl;

    cout << "----------------" << endl;

    cout << endl;
    bool state{false}; // Declare and initialize
    cout << boolalpha;
    cout << "state : " << state << endl;
    
    state = true; // Assign
    
    cout << "state : " << state << endl;


    //Auto type deduction
    //Careful about auto assignments
    auto var3 {333u}; // Declare and initialize with type deduction
    
     var3 = -22; // Assign negative number. DANGER!
    
    cout << "var3 : " << var3 << endl;

   
// compound assignment

   
	int value {45};
    
    cout << "The value is : " << value << endl;
    
    cout << endl;
    value = value + 5;
    //value +=5; // equivalent to value = value + 5
    cout << "The value is (after +=5) : " << value << endl; // 50

    cout << endl;
    value -=5; // equivalent to value = value - 5
    cout << "The value is (after -=5) : " << value << endl; // 45 

    cout << endl;
    value *=2;
    cout << "The value is (after *=2) : " << value << endl; // 90

    cout << endl;
    value /= 3;
    cout << "The value is (after /=3) : " << value << endl; // 30

    cout << endl;
    value %= 11;
    cout << "The value is (after %=11) : " << value << endl;// 8
    return 0;
}
   