// A C++ program to demonstrate working of sort(),
// reverse()
#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> //For accumulate operation
using namespace std;

int main()
{
	// Initializing vector with array values
	int arr[] = {10, 20, 5, 23 ,42 , 15};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> vect(arr,arr+n); // if we want to copy any vector then use (=) only; vec=arr;co

	cout << "Vector is: ";
	for (int i=0; i<n; i++)
		cout << vect[i] << " ";

cout <<endl;
cout<<"finding 5: "<<binary_search(vect.begin(),vect.end(),5)<<endl;

cout <<"lower bound"<<lower_bound(vect.begin(),vect.end(),23)-vect.begin()<<endl;
cout <<"upper bound"<<upper_bound(vect.begin(),vect.end(),23)-vect.begin()<<endl;
	return 0;
}
