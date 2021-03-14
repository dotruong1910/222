#include<iostream>
#include <string>
#include <vector>
#include<sstream>

using namespace std;
int main(){
    int n ;cin>>n;
    string a[n][1];
    int count =0;
    for(int i = 0;i<n;i++){
            cin >> a[i][0];
    }
    for(int i = 0;i<n;i++){
        if(a[i][0] == "Nemo"&&i!=0 && i!=n-1){
            cout<<a[i-1][0]<<" and "<<a[i+1][0];
            break;
        }
        if(a[i][0] == "Nemo"&&i!=0 && i==n-1){
            cout<<a[i-1][0]<<" and " <<a[0][0];
            break;
        }
        if(a[i][0] == "Nemo"&&i==0 && i!=n-1){
            cout<<a[n-1][0]<<" and " <<a[i+1][0];
                
                break;
            }
    }
}

     
