/*making a function for adding two number*/
#include <iostream>
using namespace std;

//making a function 
int add(int a,int b)
{
    return(a+b);
}

//using the function on the main program
int main(){
    int result,a,b;
    cout << "Sum Program (int)\n";
    cout << "Enter the first number\n";
    cin >> a;
    cout << "Enter the second number\n";
    cin >> b;
    //using the function
    result=add(a,b);
    cout << "The sum is "<<result;
    return 0;
}