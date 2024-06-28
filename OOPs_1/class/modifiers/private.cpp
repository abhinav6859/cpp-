//The class members declared as private can be accessed only
// by the member functions inside the class. 

// Only the member functions or
// the friend functions are allowed to access the private data members of the class.

// C++ program to demonstrate private 
// access modifier 

#include<iostream> 
using namespace std; 

class Circle 
{ 
	// private data member 
	private: 
		double radius; 
	
	// public member function	 
	public:	 
		void compute_area(double r) 
		{ // member function can access private 
			// data member radius 
			radius = r; 
			
			double area = 3.14*radius*radius; 
			
			cout << "Radius is: " << radius << endl; 
			cout << "Area is: " << area; 
		} 
	
}; 

// main function 
int main() 
{ 
	// creating object of the class 
	Circle obj; 
	
	// trying to access private data member 
	// directly outside the class 
	obj.compute_area(1.5); 
	
	
	return 0; 
} 
