#include <iostream>
#include <string>

using namespace std;

/*lets make a program to find the length of the string*/

int main(){
    
    //lets declare some string variables
    string txt,Fullname;
    //lets take the string value from the user of the compiled code
    cout << "What is your First Name \n";
    //lets take the value in txt string variable.
    cin >> txt;
    //now lets count the string length of the users first name,
    //lets, use .length() function,
    cout << "you have " << txt.length() << " letters on your  First name\n";
    
    /*The reason for me using the first name not the full name is because the cin function takes the 
    first word of the input string and counts spaces and tabs as end points so for its solution we use 
    the getline() function to read a line of text.*/

    //so to use it..
    cout <<"Enter your full name.\n";
    getline (cin, Fullname);   //This is the most common way for entering a string variable..
    cout << "Hi "<<Fullname;
    //line 26 and 27 got bugged idk why?
    return 0;
}
