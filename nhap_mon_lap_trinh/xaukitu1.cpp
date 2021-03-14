/* #include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
    string s;
    cin >>s ;
    string s2;
    int n;
    cin >> n >> s2;
    cout<<s.insert(n,s2);
} */

// tráo kí tự
/* #include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int x,y;
    cin >> x >> y;
    char tmp = s[x];
    s[x]= s[y];
    s[y]=tmp;
    
    cout<<s;
} */
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1,s2;
//     cin >> s1;
//     int n;
//     cin >> n >> s2;
//     s1.replace(n,1,s2);
//     cout<<s1;
// }
/* #include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i = s.length()-1; i>=0; i--){
        cout<<s[i];
    }
}
 */
//xoa ki tu
/* #include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int n;
    cin >> s >> n;
    s.erase(n,1);
    cout<<s;
} */

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string result;
    result.reserve(s.size());
    while(!s.empty()){
        int h = s.length();
       for(int i = h; i >= s.find(' '); i--){
           result.append(s.find(' '),i);
           s=s.substr(0,s.find(' '));
       }
    }
    cout<<result;
}