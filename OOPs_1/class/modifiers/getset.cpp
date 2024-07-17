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


     Hero a;

  cout <<"a health is :" <<a.getHealth() <<endl;
a.setHealth(98);
 cout <<"a health is :" <<a.getHealth() <<endl;
   

   cout <<"size of a is  :" <<sizeof(a) <<endl; // due to Padding and Greedy Alignment
    return 0;
}