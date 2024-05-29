#include <iostream>
#include <limits>
using namespace std;
int main(){

	cout << "The range for short is from " << numeric_limits<short>::min() << " to " 
        << numeric_limits<short>::max() << endl;
        
    cout << "The range for unsigned short is from " << numeric_limits<unsigned short>::min() << " to " 
        << numeric_limits<unsigned short>::max() << endl;
        
        
	cout << "The range for int is from " << numeric_limits<int>::min() << " to " 
        << numeric_limits<int>::max() << endl;
        
    cout << "The range for unsigned int is from " << numeric_limits<unsigned int>::min() << " to " 
        << numeric_limits<unsigned int>::max() << endl;
        
    cout << "The range for long is from " << numeric_limits<long>::min() << " to " 
        << numeric_limits<long>::max() << endl;
        
    cout << "The range for float is from " << numeric_limits<float>::min() << " to " 
        << numeric_limits<float>::max() << endl;
        
    cout << "The range(with lowest) for float is from " << numeric_limits<float>::lowest() << " to " 
        << numeric_limits<float>::max() << endl;
        
    cout << "The range(with lowest) for double is from " << numeric_limits<double>::lowest() << " to " 
        << numeric_limits<double>::max() << endl;
        
    cout << "The range(with lowest) for long double is from " << numeric_limits<long double>::lowest() << " to " 
        << numeric_limits<long double>::max() << endl;
        
cout << "The range for signed short is from " << numeric_limits<signed short>::min() << " to " 
        << numeric_limits<signed short>::max() << endl;
    

// std::numeric_limits<T>::min():
// For integral types: The smallest positive value (typically 1 for signed types).
// For floating-point types: The smallest positive normalized value.
// std::numeric_limits<T>::lowest():
// For all types: The most negative value the type can represent.

    //Other facilities
    //More info : https://en.cppreference.com/w/cpp/types/numeric_limits
    cout << "int is signed : " << numeric_limits<int>::is_signed << endl;
    cout << "Number of bits in an int (excluding the sign bit) : " << numeric_limits<int>::digits << endl;
    return 0;
}