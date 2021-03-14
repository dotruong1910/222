/* #include<iostream>
#include<cstring>
#include<string>
using namespace std;
bool checkso(string s)
{
    int n =0;
    for(int i = 0; i < s.size(); i++){
        n+= s[i] % 2;
    }
    if( n > 0 && n <s.length()) return false;
    else return true;
}
int main()
{
    int n;
    cin >> n;
    string s;
    for(int i =0; i<n;i++)
    {
    cin >> s;
    checkso(s);
        if(checkso(s)==true){
            cout<<"yes"<<endl;
        }
        else{
        cout<<"no"<<endl;
        }
    }
} */