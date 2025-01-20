/*So lets make a class of computer processer and make an object out of it*/
#include <iostream>
using namespace std;
// For creating class we use the following syntax
class   PC{
    public:
    int cores;
    string name;
};

int main(){
    //for making an object form class the syntax is.
    PC Amd; //Here Amd is a object of class Pc
    //For assessing the class values 
    Amd.cores=12;   //This is the atribute of the class 
    Amd.name="x6848454984";
    //printing out the objects values
    cout << Amd.cores <<"\n"<<Amd.name;

}