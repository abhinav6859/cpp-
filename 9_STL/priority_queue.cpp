// C++ program to demonstrate the use of priority_queue


// A C++ priority queue is a type of container adapter, specifically designed such that the first element of the queue is either the greatest or the smallest of all elements in the queue.
// elements are in non-increasing or non-decreasing order.

//In C++ STL, the top element is always the greatest by default.

// C++ program to demonstrate the use of priority_queue
#include <iostream>
#include <queue>
using namespace std;

// driver code
int main()
{
	int arr[6] = { 10, 2, 4, 8, 6, 9 };

	// defining priority queue
	priority_queue<int> max;
   priority_queue<int, vector<int>, greater<int> > min;

	// printing array
	cout << "Array: ";
	for (auto i : arr) {
		cout << i << ' ';
	}
	cout << endl;
	// pushing array sequentially one by one
	for (int i = 0; i < 6; i++) {
		max.push(arr[i]);
	}

	// printing priority queue
	cout << "Priority Queue: ";
	while (!max.empty()) {
		cout << max.top() << ' ';
		max.pop();
	}

// pushing array sequentially one by one
	for (int i = 0; i < 6; i++) {
		min.push(arr[i]);
	}

   cout << "Priority Queue: ";
	while (!min.empty()) {
		cout << min.top() << ' ';
		min.pop();
	}
	return 0;
}
