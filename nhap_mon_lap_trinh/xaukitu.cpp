#include <iostream>
#include <cstring>
#include<string>

using namespace std;

int main () {
   
  
   string s1, s2;
   cin >> s1;
   cin >> s2;
   int tong;
   tong= 0  ; 
   
   for(int i=0;i<s1.length();i++){
   if(s1[i] == s2[i])
   {
       tong=tong+1;
    }}
   cout<<tong;
   

   return 0;
}