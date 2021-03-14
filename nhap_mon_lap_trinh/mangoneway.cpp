/* #include<iostream>
#include<vector>
using namespace std;
int main()  
{
    int n;
    int m;
    cin>> n;
    int socongnhan[n];
    double sosanpham[m];
    double tbc;
    double tongtren;
    for(int i=0; i<n;i++)
    {

        cin>>sosanpham[i];
        tongtren +=sosanpham[i];
    }
tbc= tongtren/n;

for(int i=0; i<n;i++)
    {
       if(sosanpham[i]>= tbc) 
       {cout<<sosanpham[i]<<" ";
       }
    }
return 0;
} */
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    for(int i =0; i<n;i++)
    {
    cin>>s;
    int h =0;
    for(int i = 0; i < s.size(); i++){
        h+= s[i] % 2;
        cout<<h;
    }
    if(h > 0 && h <s.length()){
        cout<<"1";
    }
       
    }
    
}