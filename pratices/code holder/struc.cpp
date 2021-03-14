#include <iostream>
using namespace std;

struct cylinder{
    double radius,high;
    cylinder (double _radius, double _high)// this  is a constructor
    {
        _radius = radius;
        _high = high;
    }
    double getSurfaceArea(){
        return radius*radius*3.14*high;
    }
    double getVolume(){
        // them code cua ban o day
        double vol =2.0*3.14*radius*(radius+high);
        return vol;
    }
};

int main() {
    // them code cua ban o day
    double x,y;
    cylinder s1(x,y);// khoi tao 2 bien de goi cai nay`
    cin >> s1.radius >> s1.high;
    cout<<s1.getVolume()<<" "<<s1.getSurfaceArea();
}
