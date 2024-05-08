#include <iostream>
#include <vector> // Include the vector library
using namespace std;

int main() {
    // Declare and initialize a vector of integers
    vector<int> myVector = {10, 20, 30, 40, 50};




    // Access elements using indexing
    cout << "Access elements using indexing:" << endl;
    for (size_t i = 0; i < myVector.size(); ++i) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // Access elements using at() method (bounds-checked)
    cout << "Access elements using at() method:" << endl;
    for (size_t i = 0; i < myVector.size(); ++i) {
        cout << myVector.at(i) << " ";
    }
    cout << endl;

    // Add elements to the end using push_back()
    myVector.push_back(60);
    myVector.push_back(70);

    // Remove last element using pop_back()
    myVector.pop_back();

    // Insert elements at specific positions using insert()
    myVector.insert(myVector.begin() + 2, 99);

    // Remove elements at specific positions using erase()
    myVector.erase(myVector.begin() + 3);

    // Clear all elements using clear()
    // myVector.clear();

    // Check if vector is empty using empty()
    if (myVector.empty()) {
        cout << "Vector is empty." << endl;
    } else {
        cout << "Vector is not empty." << endl;
    }

    // Iterate through the vector using iterators
    cout << "Iterating through the vector using iterators:" << endl;
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using range-based for loop to iterate through the vector
    cout << "Using range-based for loop to iterate through the vector:" << endl;
    for (int element : myVector) {
        cout << element << " ";
    }
    cout << endl;

    // Access first and last elements
    cout << "First element: " << myVector.front() << endl;
    cout << "Last element: " << myVector.back() << endl;

    // Resize the vector
    myVector.resize(8, 0); // Resize to 8 elements, filling new elements with zeros

    // Display the resized vector
    cout << "Resized vector:" << endl;
    for (int element : myVector) {
        cout << element << " ";
    }
    cout << endl;

    // Get the size and capacity of the vector
    cout << "Size of the vector: " << myVector.size() << endl;
    cout << "Capacity of the vector: " << myVector.capacity() << endl;

    return 0;
}
