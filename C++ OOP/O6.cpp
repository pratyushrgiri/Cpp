/*using Inheretence*/
#include <iostream>
using namespace std;
//lets make a basic class which i have to inherit from
class pencil{
// the class is a pencil so its attributes are
    public:
    float height;
    float radius;
    string colour;

};
// lets inherit the class pencil on pen with some additional features.
class pen: public pencil{
 
    public:
    int inkPercentage;
};

