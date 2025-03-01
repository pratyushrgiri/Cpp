/*For using time in cpp we use <ctime> header file*/
#include <iostream>
#include <ctime>
using namespace std;

int main(){ 
    time_t Time;//declaring the  time object
    //for getting the time
    time(&Time);
    //printing the time object
    cout << ctime(&Time);
    return 0;
}