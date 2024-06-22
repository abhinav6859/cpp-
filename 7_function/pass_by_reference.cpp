#include <iostream>
using namespace std;
// When you pass an argument to a function by reference, the function receives a
//  reference to the original argument.
// Any changes made to the parameter inside the function affect the original argument.
void passByReference(int &num1) {
    num1 = 100; // This change affects the original variable
    cout << "Inside function (by reference): " << num1 << endl;  //100
}

int main() {
    int original1 = 10;
    cout << "Before function call: " << original1 << endl; //10
    passByReference(original1);
    cout << "After function call: " << original1 << endl;  //100
    return 0;
}
