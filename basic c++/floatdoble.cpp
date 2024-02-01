
// float double and long double data dype

#include <iostream>
#include <iomanip>  //for setprecision
#include <limits>  //for numeric_limit


using namespace std;

int main(void)
{

    float x=3456.123f;
   double a=9.123456789;
long double aa= 999.12345678L;

cout <<setprecision(10);

    cout << "double a="<<a<<"\n";
   
    cout << "long double aa= "<<aa<<"\n";
    
    cout << "float x=  " << x<<"\n" ;

    cout << numeric_limits<long double>::digits10;
}