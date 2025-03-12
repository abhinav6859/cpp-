// 
//
#include <iostream>
using namespace std;

class hero {
    // properties
    char name[20];
    int id;
};

class Box {
    public :
   double length;
   double breadth;
   double height;
};
int main()
{
 //   creation of object
hero h1;
   cout <<"size : "<<sizeof(h1)<< endl;
   // when our class is empty then sizeof(h1) is 1 , only for identification
    


    Box box1;
    Box box2;

   double volume ;

   //Box1 specification 
   box1.height =50;
   box1.breadth =5;
   box1.length =10;

    //Box2 specification 
   box2.height =50;
   box2.breadth =50;
   box2.length =10;

   // volume of box1
   volume= box1.height*box1.breadth  *box1.length;
   cout<< " volume of Box1 : " << volume << endl;

    // volume of box2
   volume= box2.height*box2.breadth  *box2.length;
   cout<< " volume of Box2 : " << volume << endl;

   return 0;
}
