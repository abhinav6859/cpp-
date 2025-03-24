// Templates and Generics are features in programming languages that allow code reusability 
// and type safety

// they enable us to write functions and classes that operate on any data type , rather than 
// being restricted to a specific one.

// Templates commonly used in c++ 
// Generics Used in java ( and supported in python via type hints )



// A generic function to find the maximum of two values 
#include <iostream>

using namespace std;

template <typename T>
T findmax(T a, T b){
    return (a > b) ? a : b;
}

int main(){
    cout<< " Max of 3 and 7 : " << findmax(3,7) <<endl;
    cout<< " Max of 3.4 and 7.7 : " << findmax(3.4,7.7) <<endl;
    return 0;
}
