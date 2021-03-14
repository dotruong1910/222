#include <math.h>
#include <iostream>
using namespace std;
int main()
{
int a; int ucln=1 ;
int b; int min;
cin>>a;
cin>>b;
a=abs(a);
b=abs(b);
if(a==0 && b!=0){cout<<abs(b);}
if(a!=0 && b==0){cout<<abs(a);}
else if (a==0 && b==0){cout<<"khong co uoc chung";}

if(a<b){
        min = a;
        }   
else
{
        min = b;
}
for(int i=1;i<=min;i++)
{
    if(a%i==0 && b%i==0){
            ucln=i;
            
    }
}

cout<<ucln;
}
