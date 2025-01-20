/*As string acts as an array so lets
take the value of the string and modify 
it...*/
#include <iostream>
#include <string>
using namespace std;
/*So lets make an program that outputs the 
first and the last string letter*/
int main(){
    string myString="Hello";
    //So lets output the first letter of the mystring variable.
    cout << myString[0]<<"\n";

    //now lets take the last letter
    
    /*For this we shall know that an array starts whith 0 so 
    the last digit should be the (length_of_string-1)
    hence we can take the value of the strings last digit.*/
    cout << myString[myString.length()-1]<<"\n";//this gets the last string 

    /*So till now we learned that how take the menbers of the 
    string but thats not it we can change the string letters too.*/
    
    //So lets change the 'H' of hello to 'J' to make it Jelllo.
    myString[0]='J';
    //lets print this
    cout << myString << "\n";

    /*The <string> library also has an at() function that can be used to access characters in a string*/
    
    //so I can get the character of the string by using at too.
    cout << myString.at(0)<<"\n"; //this gives me 'J' from string "Jello"
    //similarly I can manipulate the string characters
    myString.at(0)='H'; //This makes the "Jello" stiring to "Hello"

    return(0);
}