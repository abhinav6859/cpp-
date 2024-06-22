// Range-based For Loop
#include <iostream>
#include <vector>


using namespace std;

int main() {
    int table [ ] {};
    int n;
    cout<< " enter what table u want to print \n";
    cin>> n;
    cout << "ur table\n";
    for(int t: {1,2,3,4,5,6,7,8,9,10}){
        t=t*n;
        cout << t<< "\n";
    }
return 0;
}