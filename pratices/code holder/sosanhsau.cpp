/* #include<iostream>
#include<string>
#include <cstring>
using namespace std;
int main(){
    char s1[1000],s2[1000];
    cin >> s1 >> s2;
    if(strcmp(s1,s2) == 0){
        cout<<"yes";
    }
    else(cout<<"no");
} */
/* #include<iostream>
#include<string>
#include<cstring>
#include<string.h>
using namespace std;
int main(){
    char s[100],s2[1];
    cin >>s ;
    int n;
    cin >> n>> s2[0];
    //cout<<strlen(s);
    s[strlen(s)+1]='\0';
    for(int i = strlen(s) ; i > n-1; i-- ){
        s[i] = s[i-1];
    }
    s[n]=s2[0];
    //cout<<strlen(s);
    //cout<<s[2];
      for (int i = 0; i < strlen(s); i++)
    {
        cout<<s[i];
    }  

} */
/* #include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    char s[100];
    int n;
    cin >> s;
    cin >> n;
    
    /* for(int i = n  ; i < strlen(s) ; i ++){
        cout<<s[i];
    } 
     for(int i = n  ; i < strlen(s) ; i ++){
        s[i] = s[i+1];
    }
    //s[n] = '/0';
    for(int i = 0  ; i < strlen(s) ; i ++){
        cout<<s[i];
    } 
   // s.erase(n,1);
} */
/* #include<iostream>
#include<vector>
#include<sstream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s,_s;
    getline(cin,s);
    stringstream input(s);
    vector<string> s1;
    vector<string> s2;
    while(input.good()){
        input >> _s;
        s1.push_back(_s);
        
    }
    for(int i = s1.size()-1 ; i >=0 ; i--){
        cout<<s1[i]<<" ";
    }
} */
#include <iostream>
#include <cmath>
#include<string>
#include<sstream>
using namespace std;
bool check(string s){
    for (int i = 0; i < s.size(); i++){
        if (s[i] < '0' || s[i] > '9'){
            return false;
        }
    }
    
    return true;
}
int convert(string s){
   int num = 0;
   int count = 0;
    for (int i = s.size()-1; i >= 0; i--){
        num += (s[i] -48) * pow(10,count);
        count++;
    }
    return num;
}
int main(){
    string line;
    cin >> line;
    stringstream out(line);
    if(!check(line)) cout<<"Invalid!";
    else{
        int nvalue;
        out >> nvalue;
        cout<<nvalue;
        //cout << convert(line);
    }
    return 0;
}
