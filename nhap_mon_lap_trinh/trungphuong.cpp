#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()  
{
    int a, b, c;
    cin>> a >> b >> c;
    double hieu;
    double delta, x1, x2;
    delta = double(b) * double(b) - (4 * double(a) * double(c));
    x1    = ((-double(b)) - sqrt(delta))/2*double(a);
    x2    = ((-double(b)) + sqrt(delta))/2*double(a);
    if( a==0 && b == 0 && c== 0 )
    {
        cout<<"phuong trinh co vo so nghiem";
        return 0;
    }
    else if( a == 0 && b == 0 && c!= 0)
    {
        cout<<"phuong trinh vo nghiem";
        return 0;
    }
    else if( a == 0 && b  > 0 && c<0)
    {   
        hieu=-double(c)/double(b);
        cout<<"phuong trinh co 2 nghiem\n"<<fixed<<setprecision(5)<<-sqrt(hieu)<<" "<<sqrt(hieu);
        return 0;
    }
    else if( a != 0 && b == 0 && c== 0)
    {
        cout<<"phuong trinh co 1 nghiem\n0.00000";
        return 0;
    }
    else if( delta > 0 && x1 > 0 && x2 > 0 && x1 > x2)
    {
        cout<<"phuong trinh co 4 nghiem\n"<<fixed<<setprecision(5)<< -sqrt(x1) <<" "<< -sqrt(x2)<<" "<< sqrt(x2) <<" "<< sqrt(x1);
        return 0;
    }
    else if( delta > 0 && x1 > 0 && x2 > 0 && x1 < x2)
    {
        cout<<"phuong trinh co 4 nghiem\n"<<fixed<<setprecision(5)<< -sqrt(x2) <<" "<< -sqrt(x1)<<" "<<sqrt (x1) <<" "<< sqrt(x2);
        return 0;
    }
    else if( delta > 0 && x1 > 0 && x2 < 0)
    {
        cout<<"phuong trinh co 2 nghiem\n"<<fixed<<setprecision(5)<< -sqrt(x1) <<" "<< sqrt(x1);
    return 0;
    }
    else if( delta > 0 && x1 < 0 && x2 > 0)
    {
        cout<<"phuong trinh co 2 nghiem\n"<<fixed<<setprecision(5)<< -sqrt(x2) <<" "<< sqrt(x2);
        return 0;
    }
    else if( delta > 0 && x1 > 0 && x2 == 0)
    {
        cout<<"phuong trinh co 3 nghiem\n"<<fixed<<setprecision(5)<< -sqrt(x1) <<" "<<x2<<" "<<sqrt(x1);
        return 0;
    }
    else if( delta > 0 && x1 == 0 && x2 > 0)
    {
        cout<<"phuong trinh co 3 nghiem\n"<<fixed<<setprecision(5)<< -sqrt(x2) <<" "<<x1<<" "<<sqrt(x2);
        return 0;
    }
    else if( delta < 0)
    {
        cout<<"phuong trinh vo nghiem";
        return 0;
    }
    else if( delta >0 && x1 == 0 && x2 <0)
    {
        cout<<"phuong trinh co 1 nghiem\n"<<fixed<<setprecision(5)<<x1;
        return 0;
    }
    else if( delta >0 && x1 < 0 && x2 == 0)
    {
        cout<<"phuong trinh co 1 nghiem\n"<<fixed<<setprecision(5)<<x2;
        return 0;
    }
    else if (delta == 0 && x1 == 0)
    {
        cout<<"phuong trinh co 1 nghiem\n"<<fixed<<setprecision(5)<<sqrt(x1);
        return 0;
    }
    else if (delta == 0 && x1 > 0)
    {
        cout<<"phuong trinh co 2 nghiem\n"<<fixed<<setprecision(5)<<-sqrt(x1)<<" "<<sqrt(x2); 
        return 0;
    }
    else if( x1 < 0 && x2 < 0 )
    {
        cout<<"phuong trinh vo nghiem";
    }
    else if( a == 0 && b > 0 && c > 0)
    {
        cout<<"phuong trinh vo nghiem";
    }
    else if( a == 0 && b != 0 && c == 0 )
    {
        cout<<"phuong trinh co 1 nghiem\n0.00000";
    }
   
return 0;
}