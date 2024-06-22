
// Arrays

#include <iostream>

using namespace std;

int main() {
    
    char vowels[]  {'a' ,'e', 'i', 'o', 'u' };
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    
//    cin >> vowels[5];  out of bounds - don't do this!!
    
    double hi_temps []  { 90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
    
    hi_temps[0] = 100.7;    // set the first element in hi_temps to 100.7
                                       // we'll talk about assignment statement in an upcoming section
    
    cout << "The first high temperature is now: " << hi_temps[0] << endl;
//    
  
    int test_scores [] {100, 90, 80,70, 60};
  
    cout << "\n array is:" << endl;
    for (int i=0;i<5;i++){
        cout << i+1 <<" . test_scores ["<<i <<"] : "<<test_scores[i] << endl;
    }
   
    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    
    cout << "\nThe updated array is:" << endl;
    for (int i=0;i<5;i++){
        cout << i+1 <<" . test_scores ["<<i <<"] : "<<test_scores[i] << endl;
    }
 
 	//Omit the size of the array at declaration
   /*
    int class_sizes[] {10,12,15,11,18,17,23,56}; 
	
	// Will print this with a range based for loop
	for(auto value : class_sizes){
		std::cout << "value : " << value << std::endl;
	}
    */
for (auto value : test_scores){
    cout << "value :"<< value << endl;
}

   // display  memory address or storage location where the array is located 
    cout << "\nNotice what the value of the array name is : " << test_scores << endl;

    cout << endl;
    return 0;
}

