#if 0 
#include<iostream>
using namespace std;
bool isSodoixung(string s){
    int len= s.length();
    for(int i = 0; i <= len/2;i++ ){
        if(s[i] != s[len-i -1]) return false;
    }
    return true;
}
int main(){
    string s;
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> s;
        if(isSodoixung(s)) cout<<"yes"<<'\n';
        else cout<<"no"<<'\n';
    }
return 0;
} */
 #include<iostream>
using namespace std;
void numberSum(string s){
    int len = s.length();
    int sum =0;
    for( int i = 0 ; i < len ; i++){
        sum+= s[i]-48;
    }
    cout<<sum<<'\n';
}
int main(){
    int n;
    cin >> n;
    int sum;
    string s;
    for(int i = 0; i < n ; i++){
        cin >>s;
        numberSum(s);
    }
    
} */
 #include<iostream>
using namespace std;
void timKiem(int socancheck, string s){
    int len = s.length();
    int a= 0;
    for(int i = 0 ; i < len ; i++){
        if(s[i]-48 == socancheck){
            cout<<i+1<<'\n';
            a = 1;
            break;
        }
    }
    if(a!=1)cout<<"-1"<<'\n';
}
int main(){
    int n;
    int socancheck;
    string s;
    cin >> n;
    for(int i = 0 ; i < n ;i++){
        cin >> s >> socancheck;
        timKiem(socancheck,s);
    }
    return 0;
} */

//
 #include<iostream>
using namespace std;
void ganPhantu( int n){
    int mark = 1;
    for(int i = n-1 ; i >=1 ; i --)
        if( n% i == 0 && i % 2 != 0){
            cout << i<<'\n';
            break;
        }
}

int main(){
    int t , n;
    cin >> t;
    for(int i = 0 ; i < t; i++){
        cin >> n;
        ganPhantu(n);

    }
} 
 #include<iostream>
using namespace std;

bool Prime(int n){  // so nguyen to
    if( n==2) return true;
    else if (n<2) return false;
    for(int i = 2 ; i < n ; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    string s;
    int count = 0;
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        cin >> s;
        for(int i = 0 ; i < s.length(); i++){
            int mark = s[i]-48;
            if(Prime(mark)){
                count++;
            }
        }
        cout<< count<<'\n';
        count = 0;
    }
    
} 
#endif ///////

////////////////////////////////////////
#include<iostream>
using namespace std;
int sumUoc( int n){
    int sum = 0;
    for(int i =1 ; i <=n ; i++)
        if(n % i == 0){
            sum+=i;
        }
    return sum;
}
int main(){
    int t;
    int n;
    cin >> t;
    int sum = 0;
    for(int i = 0; i < t ; t++){
        cin >> n;
        cout<< sumUoc(n);
    }
    
}