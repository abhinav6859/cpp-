// find palindrome till value of n

#include <vector>
#include <iostream>
using namespace std;

bool isPalindrome (int num){
    int original = num, reversed = 0;
    
    while (num > 0) {
        int digit = num % 10;  // Get the last digit
        reversed = reversed * 10 + digit;  // Build the reversed number
        num /= 10;  // Remove the last digit
     }
      return original == reversed;
}

void findPalindromes(int n) {
    for (int i = 1; i <= n; i++) {
        if (isPalindrome(i)) {
            cout << i << " ";  
        }
    }
}



int main()
{
    
    int n;
  
   cout<<"which size of palindrome u want :";
   cin >> n;

 cout << "Palindrome numbers up to " << n << " are: ";
    findPalindromes(n);

   
     cout << endl;
    
return 0;

}
// #include <iostream>
// using namespace std;

// // Function to check if a number is a palindrome
// bool isPalindrome(int num) {
//     int original = num, reversed = 0;
    
//     while (num > 0) {
//         int digit = num % 10;  // Get the last digit
//         reversed = reversed * 10 + digit;  // Build the reversed number
//         num /= 10;  // Remove the last digit
//     }
    
//     return original == reversed;  // Compare the original number with its reversed version
// }

// // Function to find all palindromes up to n
// void findPalindromes(int n) {
//     for (int i = 1; i <= n; i++) {
//         if (isPalindrome(i)) {
//             cout << i << " ";  // Output the palindrome
//         }
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
    
//     cout << "Palindrome numbers up to " << n << " are: ";
//     findPalindromes(n);
//     cout << endl;

//     return 0;
// }
