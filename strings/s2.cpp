#include <iostream>
#include <string>

using namespace std;

/*lets make a program to find the length of the string*/

int main(){
    
    //lets declare some string variables
    string txt;
    //lets take the string value from the user of the compiled code
    cout << "What is your First Name \n";
    //lets take the value in txt string variable.
    cin >> txt;
    //now lets count the string length of the users first name,
    //lets, use .length() function,
    cout << "you have " << txt.length() << " letters on your  First name";

    return 0;
}
