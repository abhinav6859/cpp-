#include<iostream>
using namespace std;

//Function Signature
int printCounting(int num,int ans) {

int i;

    for( i=1; i<=num; i++) {
        cout<< i << " ";
    }
    ans =ans +i;
     return ans;
     cout<<endl;
}

int main() {
int ans =0;
    int n;
    cout << "give ur number \n";
    cin >> n;

    //function Call
    printCounting(n,ans);
 cout <<"sum of all number : "<< ans <<endl;

    return 0;
}