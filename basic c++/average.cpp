#include <iostream>
using namespace std;

int main(void)

{
    int num_1, num_2, num_3 ,sum;
    float average,d ;
    cout << " num_1\n";
    cin >> num_1;
    cout << " num_2\n";
    cin >> num_2;
    cout << " num_3\n";
    cin >> num_3;

    sum = num_1 + num_2 + num_3;
    average = (float) sum / 3;
  
    cout << "sum of number" << sum << "\n and \n average is " << average  ;
    
}