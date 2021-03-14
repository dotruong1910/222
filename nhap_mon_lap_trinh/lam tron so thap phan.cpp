#include <iostream>
#include <iomanip>// goi thu vien nay ra
using namespace std;
int main(){
double a1;  cin>>a1;
double b1;  cin>>b1;
double c1;  cin>>c1;
double a2;  cin>> a2;
double b2;  cin>> b2;
double a3;   cin>> a3;
double diemTB;
diemTB= ((a1+b1+c1)+((a2+b2)*2)+a3*3)/10;
cout<<setprecision(2)<<fixed<<diemTB;//lam tron so thap phan setprecision(lam tron den so thu may)<<fixed<<ten bien;
return 0;
}
