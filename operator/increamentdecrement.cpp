// Section 8
/*
    Increment operator ++
    Decrement operator --

    Increments or decrements its operand by 1
    Can be used with integers, floating point types and pointers

    Prefix (pre-increment)       ++num
1.  increment then assign  .
2.  Increment affect just shown in the same  line .
means 
num =num +1  
result = num 


    Postfix  (post-increment)    num++
1.  assign then increment .
2.  Increment affect shown after that line .
means   
result = num
num = num+ 1


    
    Don't overuse this operator!
    ALERT!!! Never use it twice for the same variable in the same statement!!
*/
#include <iostream>

using namespace std;

int main() {
    
    int counter {10};
    int result {0};
     
// Example 1 - simple increment
    cout << "Counter : " << counter << endl;
    
    counter = counter + 1;
    cout << "Counter : " << counter << endl;
  
    counter++;
    cout << "Counter : " << counter << endl;

    ++counter; 
    cout << "Counter : " << counter << endl;

//Example 2 - preincrement
 int  counter1 = 10;
int   result1 = 0;
   
   cout << "Counter1 : " << counter1 << endl;
   
   result1 = ++counter1; // Note the pre increment
   cout << "Counter1 : " << counter1 << endl;
   cout << "Result1 : " << result1 << endl;

//Example 3 - post-increment
 int  counter2 = 10;
 int   result2 = 0;
   
   cout << "Counter2 : " << counter2 << endl;
   
   result2 = counter2++; // Note the post increment
   cout << "Counter2 : " << counter2 << endl;
   cout << "Result2 : " << result2 << endl;

    cout << endl;
    return 0;
}