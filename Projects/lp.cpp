/*Creating a calculator*/
#include <iostream>
using namespace std;
int addition(int a,int b){
    return a+b;
}
double addition(double a, double b){
    return a+b;
}
int subtraction(int a,int b){
    return a-b;
}
double subtraction(double a, double b){
    return a-b;
}
int division(int a,int b){
    return a/b;
}
double division(double a, double b){
    return a/b;
}
int multiplication(int a,int b){
    return a*b;
    }
double multiplication(double a, double b){
    return a*b;
    }
int mod(int a,int b){
    return a%b;
}
int verification(){
    int i;
    cout <<"Are u using integer or double\n"<< "1 if integer 2 if double";
    cin >> i;
    return i;
}
int main(){
    char oprand;
    int temp,a,b;
    double c,d;
    again:
    temp=verification();
    if(temp==1){
        cout<<"Enter the first number\n";
        cin>>a;
        cout<<"Enter the second number\n";
        cin>>b;
        out:
        cout<<"Enter the operation\n";
        cin>>oprand;
        switch(oprand){
            case '+':cout <<addition(a,b);
            break;
            case '-':cout <<subtraction(a,b);
            break;
            case '*':cout <<multiplication(a,b);
            break;
            case '/':cout <<division(a,b);
            break;
            case '%':cout <<mod(a,b);
            break;
            default:{
            cout<<"Invalid operation\n";
            goto out;}
            }
        }
        else if(temp==0){
            cout<<"Enter the first number\n";
            cin>>c;
            cout<<"Enter the second number\n";
            cin>>d;
            fout:
            cout<<"Enter the operation\n";
            cin>>oprand;
            switch(oprand){
                case '+':cout << addition(c,d);
                break;
                case '-':cout <<subtraction(c,d);
                break;
                case '*':cout <<multiplication(c,d);
                break;
                case '/':cout <<division(c,d);
                break;
                case '%':cout <<"Mod is not a feature for double\n";
                goto again;
                break;
                default:{
                cout<<"Invalid operation\n";
                goto fout;}
                }
            }
            else{
                cout<<"write 0 or 1\n";
                goto again;
            }  
        return 0;
}

