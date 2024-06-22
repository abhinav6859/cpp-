 

#include <iostream>
#include<climits>
using namespace std;

int main (){


    int x;
    cout << " give ur number \n";
    cin>> x;
 
        int ans =0;
        while(x!=0){
            if ((ans<INT_MIN/10)||(ans>INT_MAX/10)){
        return 0;
      }
    int d=x%10;
     
   ans=(ans*10)+d;
     
   
    x=x/10;
        }
        cout << ans <<"\n";
        return 0;
    }
