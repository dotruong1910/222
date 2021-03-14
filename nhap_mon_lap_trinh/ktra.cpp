#include<iostream>
#include<string>
using namespace std;
/* string reversestring(string s){
    int len;  len = s.length();
    string temp;
    s.insert(s.length()," ");
    for( int i = len - 1; i >=0 ; i--){
        temp.push_back(s[i]);
    }
    return temp;
} */
void reverseword(string s){ // chen nguoc
    // int len; len = s.length();
    int begin = 0; int blankpos = s.find(" ");
    string result;
    s.insert(s.length()," ");
    cout<<"vi tri bat dau: "<<begin<<endl;
    cout<<"vi tri khoang trang dau tien: "<<blankpos<<endl;
    while(blankpos > 0 ){
        //cout<<s.substr(begin,blankpos-begin+1)<<endl;
        result.insert(0,s.substr(begin,blankpos-begin+1));// chen chuoi s vao vi tri 0 cua chuoi result
                                                        //sub( trich ra chuoi con cua s trong khoang begin den blankpos)

        cout<<result<<endl;
        begin=blankpos+1;
        cout<<"vi tri bat dau: " <<begin<<endl;
        blankpos=s.find(" ",blankpos+1);// tim khoang trang tiep theo tu vi tri blankpos +1
        cout <<"vi tri khoang trang: " <<blankpos << endl;
    }
    cout<< result;
}

int main(){
    string s;
    getline(cin,s);
    reverseword(s);
   //int blankpos;
    //int len ;
   // s = reversestring(s);
}

    
   
