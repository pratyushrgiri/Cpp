/*Using Incapluation in oop*/
#include <iostream>
using namespace std;
//lets create a class
class employee{
private:
int salary; //the salary of the employee
string name; //the name of the employee
public:
//making public function for setting the values for private functions
void setEmployeeName(string n){
    name=n;

}
void setEmployeeSalary(int s){
    salary=s;
}
//making the functions for printing the private values
void printEmployeeName(){
    cout << name;
}
void printEmployeeSalary(){
    cout << salary;
}
};
//lets make simple input and output of the funcion
int main(){
    // lets make an object
    employee bernhardt;
    // making the variables 
int salary=20000;
string name="Subigya Shrestha";
    //writing the values of the employyeee and its salary
    bernhardt.setEmployeeName(name);
    bernhardt.setEmployeeSalary(salary);
    //lets print the employee name and salary
    bernhardt.printEmployeeName();
    cout<<"\n";
    bernhardt.printEmployeeSalary();
    return 0;
}
