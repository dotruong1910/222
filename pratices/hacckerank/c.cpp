#include<iostream>
#include<cstring>
using namespace std;
void reverse(char *s) {
    // Your code goes here
    int len =strlen(s);
    
    //*(s) = 's';
    *(s -1) = '\0';
    while(len>0){
        *(s)=*(s+len );
        s++;
        len --;
    } 
}
int main(){
char *s;
s = new char[50];
cin >> s;
reverse(s);
cout << s;
}