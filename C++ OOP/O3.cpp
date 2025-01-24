/*So lets make a constructor for our class*/
#include <iostream>
using namespace std;
/*Lets make a class Students where it takes the value of student details.*/

class Students{
    public:
    string name,section,fatherName;
    int rollNo;
    long fathersNumber;
    //lets make a constructor for the value input
    Students (string N,string S,int R,string FN,long FNo){
        name = N;
        section = S;
        rollNo = R;
        fatherName = FN;
        fathersNumber = FNo;
        //this is constructors parameters value alocater
    }
};

int main(){
    Students H1("Pratyush","H",840,"Uttam",9814725836);
    //lets print the student details,
    cout << "Name: " <<H1.name<<"\n"<< "Section: " <<H1.section<<"\n"<< "RollNo: " <<H1.rollNo<<"\n"<< "Fathers Name: " <<H1.fatherName<<"\n"<< "Fathers Phone Number: " <<H1.fathersNumber<<"\n";
}