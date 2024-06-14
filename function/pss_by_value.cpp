#include <iostream>
using namespace std;
// When you pass an argument to a function by value, the function receives a
// copy of the argument's value.
//  Any changes made to the parameter inside the function
// do not affect the original argument.
void passByValue(int num) {
    num = 100; // This change is local to the function
    cout << "Inside function (by value): " << num << endl; //100
}

int main() {
    int original = 10;
    cout << "Before function call: " << original << endl;//10
    passByValue(original);
    cout << "After function call: " << original << endl; //10
    return 0;
}
