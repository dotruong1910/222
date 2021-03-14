#include<stdlib.h>
#include<iostream>
using namespace std;
int bigger(int a,int b){
    return ((a+b)+abs(a-b))/2;
}
int main(){
for(int i = 0 ; i <= 100; i++ ){
    if(i % 2 == 0) cout<<i<<" ";
}
cout<<"\n";
for(int i = 0; i <= 100; i+=2){
    cout<<i<<" ";
}
cout<<"\n";
int x = 0;
while( x <= 100){
    cout <<x<<" ";
    x+=2;
}
cout<<"\n";
x = 0;
do
{
    cout<<x<<" ";
    x+=2;
} 
while (x<= 100);

return 0;

}