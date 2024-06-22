#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;
int main(){

    int COLUMN_WIDTH {20};
    unsigned char value1 {0x3}; // 0000 0011
    unsigned char value2 {0x5}; // 0000 0101
	

    cout << setw(COLUMN_WIDTH) << "value1 : " 
		<< setw(COLUMN_WIDTH) << bitset<8>(value1) << endl; 
		
	cout << setw(COLUMN_WIDTH) << "value2 : "
		<< setw(COLUMN_WIDTH) << bitset<8>(value2) << endl;
    
	//AND
	cout << endl;
	cout << "Bitwise AND :  " << endl;
    cout << setw(COLUMN_WIDTH) << "value1 & value2 : "
		<< setw(COLUMN_WIDTH) << bitset<8>(value1 & value2) << endl;
    cout << endl;

	//OR
	cout << endl;
	cout << "Bitwise OR :  " << endl;
    cout << setw(COLUMN_WIDTH) << "value1 | value2 : "
		<< setw(COLUMN_WIDTH) << bitset<7>(value1 | value2) << endl;
    cout << endl;


    //NOT
	cout << endl;
    cout << "Bitwise NOT " << endl;
	
    cout << setw(COLUMN_WIDTH) << "~value1 : "
		<< setw(COLUMN_WIDTH) <<  bitset<8>(~value1) << endl;
		
    cout << setw(COLUMN_WIDTH) << "~value2 : "
		<< setw(COLUMN_WIDTH) << bitset<8>(~value2) << endl;
		
    cout << setw(COLUMN_WIDTH) << "~01011001 : "
		<< setw(COLUMN_WIDTH) << bitset<8>(~0b01011001) << endl;//Using bin literal
		
    cout << setw(COLUMN_WIDTH) << "~01011001 : "
		<< setw(COLUMN_WIDTH) << bitset<8>(~0x59) << endl;//Using hex literal
    cout << endl; 


	//XOR
	cout << endl;
	cout << "Bitwise XOR :  " << endl;
    cout << setw(COLUMN_WIDTH) << "value1 ^ value2 : "
		<< setw(COLUMN_WIDTH) << bitset<8>(value1 ^ value2) << endl;
    cout << endl;


// from intger
// C++ Program to demonstrate
// Bitwise Operator


{
    int a = 5; //  101
    int b = 3; //  011

    // Bitwise AND
    int bitwise_and = a & b;

    // Bitwise OR
    int bitwise_or = a | b;

    // Bitwise XOR
    int bitwise_xor = a ^ b;

    // Bitwise NOT
    int bitwise_not = ~a;

    // Bitwise Left Shift
    int left_shift = a << 2;

    // Bitwise Right Shift
    int right_shift = a >> 1;

      // Printing the Results of
    // Bitwise Operators
    cout << "AND: " << bitwise_and << endl;
    cout << "OR: " << bitwise_or << endl;
    cout << "XOR: " << bitwise_xor << endl;
    cout << "NOT a: " << bitwise_not << endl;
    cout << "Left Shift: " << left_shift << endl;
    cout << "Right Shift: " << right_shift << endl;


}

   
    return 0;
}