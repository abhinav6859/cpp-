#include <iostream>
using namespace std;

int main(){

	auto var1 {12};       //interpret or store as a integer
    auto var2 {13.0};     //interpret or store as a double
    auto var3 {14.0f};      //interpret or store as a float
    auto var4 {15.0l};       // as a long
    auto var5 {'e'};        //as  a character 
    
    //int modifier suffixes
    auto var6 { 123u}; // unsigned
    auto var7 { 123ul}; //unsigned long
    auto var8 { 123ll}; // long long

    cout << "var1 occupies : " << sizeof(var1) << " bytes \n" ;
    cout << "var2 occupies : " << sizeof(var2) << " bytes \n" ;
    cout << "var3 occupies : " << sizeof(var3) << " bytes \n" ;
    cout << "var4 occupies : " << sizeof(var4) << " bytes \n" ;
    cout << "var5 occupies : " << sizeof(var5) << " bytes \n" ;
    cout << "var6 occupies : " << sizeof(var6) << " bytes \n" ;
    cout << "var7 occupies : " << sizeof(var7) << " bytes \n" ;
    cout << "var8 occupies : " << sizeof(var8) << " bytes \n" ;
   
    return 0;
}