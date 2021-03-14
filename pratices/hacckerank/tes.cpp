#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>

using namespace std;
int main(){
    double n[6];
    double tong = 0.0;
    for(int i =0 ; i < 6; i++){
         cin>>n[i];
    }
    sort(n,n+6);
    for(int i = 1; i<5;i++){
         tong+=n[i];
    }
    cout<<fixed<<setprecision(1)<<tong/4;
    return 0;
}
