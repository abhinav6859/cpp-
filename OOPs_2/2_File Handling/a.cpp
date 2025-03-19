#include <fstream>
int main () {
    std::ofstream myfile ("example.txt");
    if(myfile.is_open()){
        myfile << " writing !\n" ;
         myfile << " welcome to file handling  !\n" ;
        myfile.close();


    }
    return 0 ;
}