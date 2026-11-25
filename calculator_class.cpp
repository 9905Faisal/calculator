#include<iostream>
using namespace std;
class calculator{
public:
    double calculateArea(double radius){
    return 3.1416*radius*radius;
    }
    double calculateArea(double length, double width){
    return length*width;
    }
    double calculatearea(double base, double height){
    return 0.5*base*height;
    }
};
int main(){
calculator calc;
cout<< "Circle Area: "<<calc.calculateArea(5)<<endl;
cout<< "Rectangle Area: "<<calc.calculateArea(4,6)<<endl;
cout<< "Triangle Area: "<<calc.calculatearea(4,6)<<endl;

}
