#include<iostream>
using namespace std;
template <class  T>
void swapNumber(T & x , T & y){
    T swap = x;
    x = y;
    y = swap;
}
int main(){
    int x1,y1;
    cin >> x1 >> y1;
    swapNumber(x1,y1);
    double x2,y2;
    cin >> x2>>y2;
    swapNumber(x2,y2);
    cout<<x1<<" "<<y1<<endl;
    cout<<x2<<" "<<y2<<endl;
    
}

