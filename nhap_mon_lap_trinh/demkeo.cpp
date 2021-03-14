#include<iostream>
using namespace std;
int main()
{
    int n;
    int tong=0;
    int nCandybags[n];// so tui keo
    cout<<"number of candy bags: ";
    cin>>n;
    for(int i=0;i<=n;i++)
        {cout<<"number of candy each bag: ";
         
         cin>>nCandybags[i];
         tong += nCandybags[i];
        }
     cout<<tong; 
     return 0;  
}