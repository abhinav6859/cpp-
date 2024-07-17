#include<iostream>
using namespace std;

class Hero {
    
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
   
   Hero(){
    cout <<"constructor called" << endl;
   }

//this keyword contain address of current object

   Hero(int health){
    cout <<"this :"<< this << endl;

   }
     Hero(int health,char level){
    cout <<"this for level:"<< this  << endl;
 this -> level=level;
  this -> health=health;
   }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
};


int main() {

Hero abhi(10);
cout<< "address of abhi " <<&abhi << endl;
Hero a;

Hero temp(22,'n');
cout<< temp.getLevel()<< endl;
cout<< temp.getHealth()<< endl;
    return 0;
}