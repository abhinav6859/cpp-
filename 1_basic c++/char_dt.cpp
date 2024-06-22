#include <iostream>
using namespace std;
int main(){

	char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    
    cout << character1 << endl;
    cout << character2 << endl;
    cout << character3 << endl;
   

    //One byte in memory : 2^8 = 256 different values (0 ~ 255)
    cout << endl;
    
    char value = 65 ; // ASCII character code for 'A'
    cout << "value : " << value << endl; // A
    cout << "value(int) : " <<(int)value<<"\n"; 
 //static_cast<int>(value) it can also write with place of (int)value

//     char input;
//     int asciiValue;

//     cout << "Enter a character: ";
//     cin >> input;

//     // Printing ASCII value of the character
//     asciiValue = input;
//     cout << "ASCII value of " << input << " is: " << asciiValue << endl;

//     // Converting ASCII value to character
//     cout << "Enter an ASCII value: ";
//     cin >> asciiValue;
//     cout << "Character of ASCII value " << asciiValue << " is: " << char(asciiValue) << endl;

//     return 0;
// }

    
cout <<char(69);// integer to ascii value
cout<<"\n";
}