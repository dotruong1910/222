#include<iostream>
using namespace std;
int integerReplacement (int n ){
    /* ifstream file;
    file.open(path); */
    int count = 0;
    /* file >> n;
     */
    while(n >1){
        count++;
        if(n%2 == 0){
            n=n/2;
        }
        else if(n % 4 == 1 || n%4 == 3){
            n=n-1;
        }
        else{
            n=n+1;
        }
    }
    return count;
}
int main(){
    int n ; cin >> n;
    cout<<n%4;
}