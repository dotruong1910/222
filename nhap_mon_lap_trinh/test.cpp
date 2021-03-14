#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=1,1;
    cin >> n;
    if ((n>0)y=&&(n<=2)) cout << "1";
    else {
        for (int i=3; i<=n; i+=2){
        x=x+y;
        y=x+y;
    }
    if (n%2==1) cout << x;
    else cout <<y;
    }
    return 0;
}



