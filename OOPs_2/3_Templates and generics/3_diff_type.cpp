// A generic function to find the maximum of two values of different data types

#include <iostream>

using namespace std;

template <typename T1, typename T2>
double findmax(T1 a, T2 b) {
    return (a > b) ? static_cast<T1>(a) : static_cast<T2>(b);
}

int main() {
    cout << "Max of 1 and 9.8: " << findmax(1, 9.8) << endl;  
    cout << "Max of 10 and 9.8: " << findmax(10, 9.8) << endl;  
    cout << "Max of 9.1 and 9: " << findmax(9.1, 9) << endl; 
    cout << "Max of 1.2 and 9: " << findmax(1.2, 9) << endl;   
    cout << "Max of 3.4 and 7.7: " << findmax(3.4, 7.7) << endl;  
    return 0;
}