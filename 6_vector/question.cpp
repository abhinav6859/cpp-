/*  Section 7       
    Challenge
    
    Write a C++ program as follows:
    
    Declare 2 empty vectors of integers named
    vector1 and vector 2, respectively.
    
    Add 10 and 20 to vector1 dynamically using push_back
    Display the elements in vector1 using the at() method as well as its size using the size() method
    
    Add 100 and 200 to vector2 dynamically using push_back
    Display the elements in vector2 using the at() method as well as its size using the size() method

    Declare an empty 2D vector called vector_2d
    Remember, that a 2D vector is a vector of vector<int>
    
    Add vector1 to vector_2d dynamically using push_back
    Add vector2 to vector_2d dynamically using push_back
    
    Display the elements in vector_2d using the at() method
    
    Change vector1.at(0) to 1000
    
    Display the elements in vector_2d again using the at() method
    
    Display the elements in vector1 
    
    What did you expect? Did you get what you expected? What do you think happended?
*/
    
#include <iostream>
#include <vector> 

using namespace std;
int main() {
    
    vector <int> vector1 ;
    vector <int> vector2 ;
   
    //    Add 10 and 20 to vector1 dynamically using push_back

      vector1.push_back(10);
    vector1.push_back(20);

    cout << "\nvector1 using array syntax:" << endl;
    cout << vector1[0] << endl;
    cout << vector1[1] << endl;
    
    
    cout << "\nTest scores using vector syntax:" << endl;
    
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
   
    cout << "\nThere are " << vector1.size() << " scores in the vector1" << endl;
    
    // Add 100 and 200 to vector2 dynamically using push_back

     vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nvector2 using array syntax:" << endl;
    cout << vector2[0] << endl;
    cout << vector2[1] << endl;
    
    
    cout << "\nTest scores using vector syntax:" << endl;
    
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
   
    cout << "\nThere are " << vector2.size() << " scores in the vector2" << endl;
    
   
 vector <vector <int>> vector2d ;
vector2d.push_back(vector1)   ;
vector2d.push_back(vector2);

cout << vector2d.at(0).at(0)  <<endl ;
cout << vector2d.at(0).at(1)  <<endl ;
cout << vector2d.at(1).at(0)  <<endl ;
cout << vector2d.at(1).at(1)  <<endl ;

 cout << "\nThere are " << vector2d.size() << " scores in the vector2d" << endl;


 // Change vector1.at(0) to 1000

   vector1.at(0) = 1000;
    
  // Display the elements in vector2d again using the at() method

    cout << "\nvector2d:" << endl;
    cout << vector2d.at(0).at(0) << "  " << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << "  " << vector2d.at(1).at(1) << endl;

//    Display the elements in vector1 

    cout << "\nvector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements" << endl;

    cout << endl;
    return 0;
}

