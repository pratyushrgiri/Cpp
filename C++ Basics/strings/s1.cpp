/*String cocatenation */
#include <iostream>
//including a new directory <string>
#include <string>

using namespace std;

//Lets make a program that prints "Pratyush Giri is learning C++"

int main(){
    
    //declaring the variables
    
    string firstName= "Pratyush",lastName="Giri";
    
    //using basic concatenation by using "+"
    
    cout << firstName + " "+ lastName+ " "+ "is learning C++"+"\n";
    
    //Now lets use "apend()"for concatination
    
    string fullName;//declaring a new string variable
    
    //for using "apend() the syntax is,"

    fullName=firstName.append(" "+lastName); // added space too..
    
    //So lets print this as well

    cout << fullName;
    return 0;

}