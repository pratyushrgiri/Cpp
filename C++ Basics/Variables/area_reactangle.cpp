#include <iostream>
using namespace std;
/*Using cin and cout syntax for,
calculating an area of rectangle.*/
int main(){
    //defining the variables.
    double length,width,area;
    //taking the value of length
    cout <<"Enter the length of the reactangle\n";
    cin >> length;
    //similarly taking the value of width.
    cout <<"Enter the width of the reactangle\n";
    cin >> width;
    //calculating the area of rectangle i.e area= length X width .
    area=length*width;
    // displaying the area for the user.
    cout << "The area is " << area <<" squnits";

}