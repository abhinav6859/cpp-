
// Template class in cpp 

// storage is a template class that stores a value of any type T.
// The class is instantiated with specific types (int and double ) at runtime .


#include <iostream>

using namespace std;

template <typename T>

class storage{
    T value;
    public:
    storage(T val) : value(val)  {}
    T getvalue()  const { return value ;}

};


int main(){
    storage<int> intstorage(100);
     storage<double> doublestorage(99.99);
    cout<< " Integer storage : " << intstorage.getvalue()  <<endl;
    cout<< " double storage  : " << doublestorage.getvalue() <<endl;
    return 0;
}
