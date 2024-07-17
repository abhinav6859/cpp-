// C++ Program to show the syntax/working of Objects as a
// part of Object Oriented PProgramming

// When a class is defined, no memory is allocated but when
// it is instantiated (i.e. an object is created) memory is allocated
#include <iostream>
using namespace std;

class person {
    char name[20];
    int id;

public:
    void getdetails() {}
};

int main()
{

    person p1; // p1 is a object
    return 0;
}
