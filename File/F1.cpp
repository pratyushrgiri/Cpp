/*Today we are learning about file handaling so for file handaling
we use a new include <fstream>*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //to create a file in cpp
    //we use ofstream class of the <fstream> file
    ofstream file("F1.txt");
    //to write on the file created
    file << "This is the first file created by cpp by \"Pratyush\"";
    // to close the file
    file.close();
    return 0;
}
