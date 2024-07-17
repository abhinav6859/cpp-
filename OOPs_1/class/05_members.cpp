// C++ program to demonstrate accessing of data members 


// The data members and member functions of 
//the class can be accessed using the dot(‘.’) operator with the object.
/*
#include <iostream>
using namespace std; 
class Geeks { 
	// Access specifier 
public: 
	// Data Members 
	string geekname; 
	// Member Functions() 
	void printname() { cout << "Geekname is:" << geekname; } 
}; 
int main() 
{ 
	// Declare an object of class geeks 
	Geeks obj1; 
	// accessing data member 
	obj1.geekname = "Abhi \n"; 
	// accessing member function 
	obj1.printname(); 
	return 0; 
}
*/

//To define a member function outside the class definition
// we have to use the scope resolution:: operator along with the class name and function name. 
// C++ program to demonstrate function 
// declaration outside class 

#include <iostream> 
using namespace std; 
class Geeks 
{ 
	public: 
	string geekname; 
	int id; 
	
	// printname is not defined inside class definition 
	void printname(); 
	
	// printid is defined inside class definition 
	void printid() 
	{ 
		cout <<"Geek id is: "<<id; 
	} 
}; 

// Definition of printname using scope resolution operator :: 
void Geeks::printname() 
{ 
	cout <<"Geekname is: "<<geekname; 
} 
int main() { 
	
	Geeks obj1; 
	obj1.geekname = "xyz"; 
	obj1.id=15; 
	
	// call printname() 
	obj1.printname(); 
	cout << endl; 
	
	// call printid() 
	obj1.printid(); 
	return 0; 
} 
