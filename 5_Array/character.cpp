#include<iostream>
using namespace std;
int main ()
{
    //If a character array is null terminated, it's called as C-String
char message [] {'h','e','l','l','o','\0',};
cout << message <<"\n";
cout << "size of message : "<< sizeof(message) <<"\n";

//string literal 
char message0 [] {"hello ram"};
cout << message0 <<"\n";
cout << "size of message1 : "<< sizeof(message0) <<"\n";


     
   
    //Change characters in our array
    message[1] = 'a';

    //Print out the array through looping
    cout << "message : ";
    for( auto c : message){
        cout << c ;
    }
    cout << endl;
    

   
   
    // Will probably print garbage after your char array
    
    cout << "message : " << message << endl;
    
   

 
    //If a character array is null terminated, it's called as C-String
    
    char message1 [] {'H','e','l','l','o','\0'};
    cout << "message1 : " << message1 << endl;
    cout << "sizeof(message1) : " << sizeof(message1) << endl;
    

  
   
    char message2 [6] {'H','e','l','l','o'};
    cout << "message2 : " << message2 << endl;
    cout << "sizeof(message2) : " << sizeof(message2) << endl;

   
    

   

    //Can't safely print out arrays other than those of characters
    int numbers [] {1,2,3,4,5};
    cout << "numbers :  " << numbers << endl;
 return 0;
}