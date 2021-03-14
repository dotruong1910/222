#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef vector<int> array1d;
typedef vector<array1d> array2d; 

int main() {
    int n,q; 
    cin >> n >> q;
    array1d a1;
    array2d a2(n,array1d());// vector 2 chieu co'
                            // n dong, gia tri arr1d la gia tri cua cot 
    for(int i = 0 ; i < n; i++){
        int size;
        cin >> size;
        for(int j = 0; j < size ; j++){
            int value;
            cin >> value;
            a2[i].push_back(value);// the same as a[i][j]
        
        }
    }
    for(int i = 0 ; i < q ; i++){
        int x, y;
        cin >> x >> y;
        cout<<a2.at(x).at(y)<<endl;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}