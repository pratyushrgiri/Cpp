/*So array are also same as "C programing" but there are some changes*/
#include <iostream>
using namespace std;
int main()
{
    //for declaring array the following syntax is used;
    string name[] = {"Ram","Sita","Hari"};
    //similarly i can declare the array manually too.
    string car[3];
    car[0]="BMW";
    car[1]="Toyota";
    car[2]="Tata";
    /*Point to be noated the array has fixed size.
    So, we cant add more elements once the array is
    decleared*/

    //for the value scaning and printing of array there are many apporach.
    //by using loop
    for(int i=0;i<=2;i++)
    {
        cout << car[i]<<"\n";
        //This will print the values of array.
    }
    //another aproach is foreach loop.
    for(string s : name)
{
    cout << s<<"\n";
    //this is the easy way for printing array
}
}