//compliment base 10 int


#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int m,n;
  int mask=0;
  int ans;
  cout<< "enter ur number \n";
  cin>> n;
  m=n;
     if(n == 0)
            return 1;
  while (m!=0)
  {
   mask=(mask<<1)|1;
   m=m>>1;
  }
  ans =(~n)&mask;
  cout << ans<<"\n";
}




// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int ans =0;
//     int n;
//     int i=0;
//  int j=0;
//     int ans1=0;
//   int ans2=0;
//   int k=0;
// cout<<"enter ur number :";
// cin>>n;
// while (n!=0)

// {
//   int   bits=n&1;

//    ans=(bits * pow(10,i))+ans;
//    n= n>>1;
//     i++;
// }
// cout << ans << "\n";

// while (ans>1)
  
// { 
//    int bit =ans%10;
//   if (bit){
//     bit =bit &0;
//   }
//   else {
//     bit =bit|1;}
// ans1=bit* pow(10,j)+ans1;
// j++;
//   ans=ans/10;
// }
//    while (ans1!=0)

//       {

//          int a=ans1%10;
//           if (a){
//   ans2=pow(2,k)+ans2;}
//    k++;
//          ans1=ans1/10;
//       }

// cout<< ans2<<endl;
//  }

