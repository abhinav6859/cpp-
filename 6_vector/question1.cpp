

//given a string copntaining digits from 2-9 inclusive ,return all possible letter combinations
// that the number could represent. return the answer in any order 
 

#include <iostream>
#include <vector>
#include <string>

using namespace std;
 

void function(const string &digits, const vector<string> &digitToChar, int index, string &path, vector<string> &combinations) {
    if (index == digits.length()) {
        combinations.push_back(path);
        return;
    }
    
    char digit = digits[index];
    const string &possibleLetters = digitToChar[digit - '0'];
    
    for (char letter : possibleLetters) {
        path.push_back(letter);           // Choose
        function
    (digits, digitToChar, index + 1, path, combinations); // Explore
        path.pop_back();                  // Unchoose
    }
}

vector<string> letterCombinations(string digits) {
    if (digits.empty()) return {};
    
    // Mapping of digits to letters
    vector<string> digitToChar = {
        "",     "",     "abc",  "def", 
        "ghi",  "jkl",  "mno",  "pqrs", 
        "tuv",  "wxyz"
    };
    
    vector<string> combinations;
    string path;
    function
(digits, digitToChar, 0, path, combinations);
    return combinations;
}
  
int main() {
    string digits = "67";
    vector<string> result = letterCombinations(digits);
 
    for (const string &combination : result) {
        cout << combination << " ";
    }
    return 0;
}
