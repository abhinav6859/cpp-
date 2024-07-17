#include<iostream>
using namespace std;

class Hero {
    
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
   

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

// static allocation
     Hero a;
     a.setHealth(80);
     a.setLevel('b');
     cout <<"level is :"<<a.level << endl;
     cout <<"health is :"<<a.getHealth() << endl;

// dynamically allocation
Hero *b= new Hero;
b->setLevel('a');
b->setHealth(70);
 cout <<"level is :"<<(*b).level << endl;
      cout <<"health is :"<<(*b).getHealth()<< endl;
      cout <<"level is :"<<b->level << endl;
      cout <<"health is :"<<b->getHealth() << endl;
      

   

   cout <<"size of a is  :" <<sizeof(a) <<endl; // due to Padding and Greedy Alignment
    return 0;
}