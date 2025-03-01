/*to read the file F1*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string temp;
    //for reading the file we use ifstream
    ifstream File ("F1.txt");
    while (getline(File,temp))
    {
        cout << temp;
    }
    return 0;
}