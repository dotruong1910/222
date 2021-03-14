#include <iostream>
using namespace std;

struct rectangle{
    int length,high;
    
};
    rectangle getPerimeter(rectangle i){
    rectangle peri;
        peri.length = 2*(i.length + i.high) ;
        peri.high   = i.length * i.high;
        return peri;
    }

int main() {
    rectangle ins;
    cin >> ins.length;
    cin >> ins.high;
    rectangle abc = getPerimeter(ins);
    cout<< abc.length <<" "<<abc.high;
}