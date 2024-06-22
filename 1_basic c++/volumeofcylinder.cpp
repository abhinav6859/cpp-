
// volume of cylinder

#include <iostream>

using namespace std;

int main(void){

    float pi (3.14);
    int radius;
    float height;
    float volume;

 cout << "enter the radius of cylinder\n";
 cin >> radius;

 cout << "enter height of cylinder \n";
 cin >> height;

volume =pi*radius*radius*height; 
// like c only cout with place of printf
//and cin with place of scanf
cout<< "volume of cylinder is " << volume <<" square\n";

}