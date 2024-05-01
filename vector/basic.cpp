

// Vectors

/*
Remember, c++ arrays are fixed in size .
when we have no way of knowing how many size ,then we have two options
1. pick a size that you are not likely to exceed and use static arrays 
but in this option  you'll probably make it too big and waste space.

2. use a dynamic array such as vector .

what is vector ?
 
* container in the c++ template library .
* an array that can grow and shrink in size at execution time .
* provide similar sementics and syntax as arrays .
* can provide bounds checking .
* can use lots of cool functions like sort, reverse ,find, and more .

*/
#include <iostream>
#include <vector>   // don't forget this in order to use vectors

using namespace std;

int main() {

  
    
//    vector <char> vowels;         // empty 
  vector <char> vowels1 (70);      // all 70 initialized to dash
 cout << vowels1[67] << endl;

  vector <int> score (70);      //automatically all 70 initialized to zero 
 cout << score[67] << endl;

    vector <char> vowels {'a' , 'e', 'i', 'o', 'u'};
    
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    
//    vector <int> test_scores (3);  // 3 elements all initialized to zero
//   vector <int> test_scores (3, 100); // 3 elements all initialized to 100
    
      vector <int> test_scores {100, 98, 89};
    
    cout << "\nTest scores using array syntax:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nTest scores using vector syntax:" << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;
    
    cout << "\nEnter 3 test scores: ";
    cin  >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    
    cout << "\nUpdated test scores: " << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    


 }