
// rotate array from other side like question0




#include <iostream>
#include <vector> 
#include <algorithm> // for reverse

using namespace std;

int main() {  
    vector<int> nums = {1, 2, 3, 4, 5}; // Example vector
    int k = 2; // Example value for rotation

    int n = nums.size();
    k %= n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());

    // Output the rotated vector
    cout << "Rotated vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
