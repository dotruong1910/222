#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"nhap so luong so nguyen n can nhap ";
    cin>> n;
    int dayso[n];
    cout<<"nhap so trong day so:\n";
    for(int i=1;i<=n;i++)
        {
            cin>>dayso[i];
            if(dayso[i]==42)
        {
            cout<<"I've found the meaning of life!";
            return 0;
        }
        
        }
  
        
if    (dayso[n]!=42){
  cout<<"It's a joke!"  ;
        }


}