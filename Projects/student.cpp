/*Making a program to enter the data of the students of the college*/
#include<iostream>
#include<fstream>
using namespace std;
class student{
    private:
    char symbolNo[100];
    public:
    string name;
    int age;
    string fathersName;
    string mothersName;
    long int fathersNumber;
    long int mothersNumber;
    void getdata(){
        cout<<"Enter the name of the student: ";
        cin>>name;
        cout<<"Enter the age of the student: ";
        cin>>age;
        cout<<"Enter the fathers name of the student: ";
        cin>>fathersName;
        cout<<"Enter the mothers name of the student: ";
        cin>>mothersName;
        cout<<"Enter the fathers number of the student: ";
        cin>>fathersNumber;
        cout<<"Enter the mothers number of the student: ";
        cin>>mothersNumber;
        cout<<"Enter the symbol no of the student: ";
        cin>>symbolNo;
        }
    void write(string filename){
        ofstream file(filename,ios::app);
        file<<"Name: "<<name<<endl;
        file<<"Age: "<<age<<endl;
        file<<"Fathers Name: "<<fathersName<<endl;
        file<<"Mothers Name: "<<mothersName<<endl;
        file<<"Fathers Number: "<<fathersNumber<<endl;
        file<<"Mothers Number: "<<mothersNumber<<endl;
        file<<"Symbol No: "<<symbolNo<<endl;
        file<<endl;
        file.close();
        }
    void read(string filename){
       string word;
       ifstream file(filename);
       while(file>>word){
        cout<<word<<" ";
        }
}
    };

int main()
{
    int n=40;
    student sectionH[n];
    int i;
    string filename="sectionH.txt";
    for(i=0;i<n;i++){
        sectionH[i].getdata();
        sectionH[i].write(filename);
        }
    for(i=0;i<n;i++){
        sectionH[i].read(filename);
    }
    return 0;
    }

