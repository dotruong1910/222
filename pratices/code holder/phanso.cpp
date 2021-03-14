#include <iostream>
using namespace std;

struct fraction{
    int tu, mau;
    /* fraction (int _tu, int _mau){
        _tu = tu;
        _mau = mau;
    } */
};
int ucln(fraction a, fraction b){
    int c = a.mau , d = b.mau;
    while(c != d){
        if(c > d){
            c = c-d;
        }
        else
            d = d -c;
        

    }
    return c;
}
int bcnn(fraction a, fraction b){
    int bc = (a.mau*b.mau)/ucln(a,b);
    return bc;
}
fraction add(fraction a, fraction b){
    fraction sum;
    sum.tu = a.tu *(bcnn(a,b)/a.mau)+b.tu*(bcnn(a,b)/b.mau);
    sum.mau=(a.mau*b.mau)/ucln(a,b);
    return sum;
} 
 int ucln1(fraction sum){
    int c = 0;
    while(sum.tu != sum.mau){
        if(sum.tu > sum.mau){
            sum.tu = sum.tu - sum.mau;
        }
        if(sum.tu < sum.mau){
            sum.mau = sum.mau -sum.tu;
        }
        
    }
    if(sum.tu == sum.mau){
            c = sum.tu;
        }
    
    return c;
} 
int main() {
    // them code cua ban o day
    int tu, mau;
    fraction a;
    fraction b;
    cin >> a.tu >> a.mau;
    cin >> b.tu >> b.mau;
    ucln(a,b);
    bcnn(a,b);
    fraction sum = add(a,b);
    int c = ucln1(sum);
    //cout << c;

    cout<<sum.tu/c<<"/"<<sum.mau/c;
return 0;
}
