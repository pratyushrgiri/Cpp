/*Just math functions can be used by using the <cmath> library*/

#include <iostream>
//declaring the library
#include <cmath>
using namespace std;

int main()
{
    //using the max() function,
    cout << max(2,4);   //this finds the max values with in this case is 4.
    //similarly using min() function,
    cout << min(2,4);   //this finds the minimum value which in this case is 2.
    //similarly using sqrt() function,
    cout << sqrt(2);    //this gives the square root of the number in this case is 2 square is 4
    //similarly using round() function,
    cout << round(2.3); //this rounds up the decimal number in this case the cout is 2.
    //simialrly using log() function,
    cout << log(2);     //this logs the decimal or integer inside its parameter.
                        //in this case the output is 0.693147. 
    return 0;
}
