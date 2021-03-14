#include<iostream>
#include<math.h>
#include<iomanip>
#include<fstream


using namespace std;
void sumOddnums(int n){
    int sum = 0;
    for(int i = 1 ; i <= 2*n+1 ; i ++){
        if(i % 2 != 0 ){
            sum +=i;
        }
    }
    cout<<sum<<endl;
}
void multiOddnums(int n){
    long long int sum = 1;
    for(int i = 1 ; i <= 2*n+1 ; i ++){
        if(i % 2 != 0 ){
            sum *= i;
        }
    }
    cout<<sum;
}
/* int dontknow(int n){
  //  if( n = 0) return 0;
    //else if( n == 1) return 1;
    if( n > 1) {
        return n * pow(-1 , n+1) + dontknow(n-1);
    }
} */
int factory(int n){
    if( n == 0 || n == 1 ) return 1;
    else{
        return n * factory(n-1);
    }
}
int sumfactory(int n ){
    if( n == 0 || n == 1 ) return 1;
    else{
        return factory(n)+sumfactory(n-1);
    }
}
int squaresum ( int n){
    if(n == 1) return 1;
    return n* n + squaresum(n-1);
}
double squareroot(int n){
    if( n == 1 ) return 1;
    return sqrt(n+squareroot(n-1));
}
int sum(int n){
    if( n == 1) return 1;
    return n+sum(n-1);
}
double phansosum(int n){
    if( n == 1 ) return 1;
    return 1/double(sum(n))+phansosum(n-1);
}
int tongbinhphuong(int n){
    if( n == 1) return 1;
    return pow(n,n)+tongbinhphuong(n-1);
}
int tongtichluy(int n ){
    if( n == 1 ) return 1;
    return sum(n)+tongtichluy(n-1);
}
int UCLN( int a, int b){
    if(b == 0) return a;
    return UCLN(b,a%b);
}
int Fibonacci(int n){
    if(n <= 1 ) return n;
    return Fibonacci(n-1)+Fibonacci(n-2);
}
int dequytong(int n){
    if(n <= 1) return 1;
    return 2*dequytong(n-1) +dequytong(n-2) +1;
}
int dequyhieu(int n){
    if(n <= 1) return 1;
    return 3*dequyhieu(n-1) - dequyhieu(n-2);
}
long long int luythua(long long int a,long long int b){
    if(b == 0) return 1;
    return a*luythua(a,b-1);
}
void xuli(int n, int i, int a1[], int a2[]){
    int count = 0;
    for(int j = a1[i-1]; j < n - a2[i-1]; j++){
        a1[i] = j;
        a2[i] = j+a2[i-1];
            if(a2[i] == n){
                for(int temp = 1 ; i <= i; temp++ ){
                    cout<<a1[temp];
                }
                cout<<endl;
            }
            else{
                xuli(n,i+1,a1,a2);
            }
    }
  //  cout<<count;
}
int main(){
   // int n;
 //   cin >> n;
    int n;
    int i= 1;
    int count = 0;
    cin >> n;
    int a1[n+1];
    int a2[n+1];
    a1[0] = 1;
    a2[0] = 0;

   // cout<< sum(n)<<endl;
    //cout<<dequyhieu(n);
    xuli(n,1,a1,a2);
    //cout<<fixed<<setprecision(2)<<phansosum(n);
    return 0;
}




/* #include <iostream>
#include <cmath>
using namespace std;

int factorial(int n){
        if (n == 1)
            return 1;
        if (n > 0){
            return (n)*factorial(n-1);
        }
    }
 int sumOfFactorial(int n)
{
    if (n == 1)
        return 1;
    if (n > 0){
        return factorial(n) + sumOfFactorial(n -1);
    }

}
int main()
{
    int n;
    cin >> n;
    cout << sumOfFactorial(n);
    return 0;
} */