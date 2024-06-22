//Given an integer num, repeatedly add all its digits
// until the result has only one digit, and return it.
/*#include <iostream>

using namespace std;

int main () {
    int x;
    int last_digit =0;
    int sum =0;
    int d=0;
    int l=0;
    cout << "enter number\n";
    cin>> x;
  { 
//for (int i=0;i<=sum;i++){
  while (x!=0){
    last_digit = x%10;
     sum=sum +last_digit;
    x=x/10;}
   // while (sum!=0){
   // d = sum%10;
   // l =l +d;
    //sum=sum/10;}
    sum=x;}

    cout << sum;
}
//#include <iostream>
//#include <string>

//nt addDigits(int num) {
  //  while (num >= 10) {
    //    int sum = 0;
        // Convert the number to a string to iterate through its digits
      /  std::string numStr = std::to_string(num);
        
        // Sum up the digits
       // for (char digit : numStr) {
         //   sum += digit - '0';
        }//
        
        // Update num with the sum of digits
        //num = sum;
    //}
    
    return num;
//}
//
//in//t main() {
    // Example usage
    //int num = 9875;
    //int result = addDigits(num);
    
    //std::cout << "The digital root of " << num << " is " << result << std::endl;
    
    //return 0;
//}*/
