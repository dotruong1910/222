#include <bits/stdc++.h>

using namespace std;

int count_a[35], count_b[35];

int calc(string s)
{
    int res = 0;
    for( int index_1 = 0; s[index_1] != '\0'; index_1++) {
        for( int index_2 = index_1 + 1; s[index_2] != '\0'; index_2++) {
            for( char i = 'a'; i <= 'z'; i++) count_a[ i - 'a'] = count_b[ i - 'a'] = 0;
            for( int k = 0; s[index_1 + k] != '\0' && s[index_2 + k] != '\0'; k++) {
                count_a[ s[index_1 + k] - 'a']++;
                count_b[ s[index_2 + k] - 'a']++;
                // check 
                bool check = true;
                for( char i = 'a'; i <= 'z'; i++) if( count_a[ i - 'a'] != count_b[ i - 'a']) {
                    check = false;
                    break;
                }
                if( check) res ++;
            }
        }
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    while( n--) {
        string s;
        cin >> s;
        cout << calc(s) << endl;
    }
}