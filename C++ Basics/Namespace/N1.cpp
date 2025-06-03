/* So what is a namespace?
--> Name space is a way of making same named variables 
using syntax as follows*/
#include <iostream>

//so creating a namespace 
namespace Student69 {
    //here a student69 discription is given 
    std::string name="Pratyush Raj Giri";
    int Roll=6969;

}
//similarlarly using a new namespace 
namespace Student6969 {
    std::string name="Abodh Rizal";
    int roll=696969;

}

int main(){
     std:: cout<< Student69::name;
    std:: cout<< Student6969::name;
}
