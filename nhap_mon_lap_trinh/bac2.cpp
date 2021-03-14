#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double delta, x1, x2;
    delta = double(b) * double(b) - (4 * double(a) * double(c));
    x1    = ((-double(b)) - sqrt(delta))/2*double(a);
    x2    = ((-double(b)) + sqrt(delta))/2*double(a);
    if( a == 0 && b != 0 && c != 0)
    {
        cout<<"phuong trinh co 1 nghiem\n"<<-double(c)/double(b);
        return 0;
    }
    if( a == 0 && b == 0 && c == 0)
    {
        cout<<"phuong trinh co vo so nghiem";
        return 0;
       
    }
    if( a == 0 && b == 0 && c != 0)
    {
        cout<<"phuong trinh vo nghiem";
        return 0;
    }
    if (delta < 0)
    {
        cout << "phuong trinh vo nghiem";
    }
    else if ( delta == 0)
    {
        cout<<"phuong trinh co 1 nghiem \n"<<fixed<<setprecision(5)<<double(-b)/double(2*a);
    }
    else if ( delta > 0)
    {
        cout<<"phuong trinh co 2 nghiem "<<endl;
        cout<<x1<<" "<<fixed<<setprecision(5)<<x2;
    }
return 0;
}
    