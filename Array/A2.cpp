#include <iostream>
using namespace std;
/*The sizeof() operator can be used to get the size of an array
*/

int main()
{
    //lets take an integer array
    int a[]={1,3,5,6,7};
    //so lets find the size of the array
    cout << sizeof(a)<< "\n";  //this will print 20 
    //20 is the byte the array has stored so for the number of members of the array,
    //we need to divide it by the size of the single component of the array,
    cout << (sizeof(a)/sizeof(a[0]));//this should print 5.
    return 0;
}