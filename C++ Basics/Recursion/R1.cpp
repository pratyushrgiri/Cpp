/*So lets make a recurtion program to sum the natural numbers given by the users*/
#include <iostream>
using namespace std;
//lets make an function Sum()
int Sum(int n){
    if(n==0){
    return 0;
    }
    else{
        return n+Sum(n-1);
    }
}
//Recursion program complete so lets ask the user for the sum.
int main(){
    int sum,n;
    cout << "Enter the number of natural number sum: ";
    cin >> n;
    cout<< "\n";
    sum=Sum(n);//take the sum by recursion 
    //print the sum.
    cout <<"The sum is: " << sum<<"\n";
}