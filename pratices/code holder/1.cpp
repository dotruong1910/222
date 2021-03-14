#include<iostream>
#include<string>
using namespace std;
bool is_subtle(string s1,string s2){
    if(s1.length() < s2.length()){
        return false;}
    else{
        int check_b = 0;
        for(int i = 0; i < s1.length(); i++){
            if(s1[i] == s2[check_b]){
                check_b ++;
                if(check_b = s2.length()){
                    return true;
                }
            }
        }
    }
    return false;
}
int main(){
    int n ,check = 0;
    string s1, s2;
    cin >> n;
for(int time = 0 ; time < n; time++){
        cin >> s1 >> s2;
        string onlyupper_s1="";
        // lưu từng kí tự in hoahoa
        for(int i = 0 ; i < s1.length(); i++){
            if(isupper(s1[i])){
                onlyupper_s1+=s1[i];
            }
        }
        //doi toan bo s1 sang in hoa
        for(int i = 0 ; i < s1.length();i++){
            for(int j =0; j < s2.length();j++){
                if(s1[i] - 32 == s2[j]){
                    s1[i]=s1[i]-32;
                }
            }
                
        }
        string upper_s1="";
        for(int i = 0; i <s1.length(); i++){
            if(isupper(s1[i])){
                upper_s1+=s1[i];
            }
        }
   
        
        
cout<<upper_s1<<endl;
cout<<onlyupper_s1;
}
return 0;
}
// con sai 1 case
//s1 = AbbBcD
//s2 = ABBD
// dap an dung: yes
// code nay` ra: no
/* if(upperofs1 == s2){cout << "YES"<<endl;}
        else if(upper_s1.length() < s2.length() || upper_s1.length() > s2.length()) cout<<"NO"<<endl;
        else if(upper_s1.length()>= s2.length()){
            for(int i = 0 ; i < s2.length(); i++){
                if(upper_s1[i]=s2[i]){
                    check = 1;
                }
                else
                {
                 check = 0;
                 break      ;
                }
                
            }
            if(check = 1){
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        } */
