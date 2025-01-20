/*lets use make an class that has functions*/
#include <iostream>
using namespace std;
class newCoder{
    public:
    //Making C++ Python.
    void print(string txt){
        cout << txt;
    }
    void print(int x){
        cout << x;
    }
    void print(double x){
        cout << x;
    }
    //Making function to add two numbers.
    int sum(int n1,int n2){
        return (n1+n2);
    }
    //lets try overloding the function
    double sum(double n1,double n2){
        return (n1+n2);
    }
};

int main(){
    newCoder x;
    //lets use the functions created
    x.print("Hello World \n");
    x.print(x.sum(2,2));
}
