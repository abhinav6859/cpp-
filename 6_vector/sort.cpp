// merge both array in first array and then sort 
#include <iostream>
#include <vector>
#include <algorithm> // for std::sort

int main() {
    // First vector
    std::vector<int> vec1 = {5, 2, 9, 1, 3};

    // Second vector
    std::vector<int> vec2 = {8, 7, 6, 4, 0};

    // Merging vec2 into vec1
    vec1.insert(vec1.end(), vec2.begin(), vec2.end());

    // Sorting the merged vector in ascending order
    std::sort(vec1.begin(), vec1.end());
 int i=0;
    // Display the merged and sorted vector
    std::cout << "Merged and sorted vector: ";
    for (int i : vec1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
