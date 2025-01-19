#include <iostream>
using namespace std;

int main(){
    //first lets take a string variable
    string food="Momo";
    //for declaring a string pointer
    string* ptr=&food;//this here points to the memory address of he food string variable.

    //printing the memory address of the string variable food

    cout << ptr <<"\n"; // Reference: Output the memory address of food with the pointer

    //printing the string on the memory address
    // Dereference: Output the value of food with the pointer
    cout << *ptr <<"\n";//this prints string "Momo"

    //I can modify the value of the variable by the pointer.
    *ptr="Samosa";//this changes the value of the food string variable from "Momo" to "Samosa"

    //lets print the new value of food 
    cout << food << "\n";
    
    return 0;
}