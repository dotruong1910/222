#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
typedef vector<int> v1d;
typedef vector<v1d> v2d;

int main() {
    int n, p, count = 0;
    cin >> n >> p;
    v1d arr;
    v2d v(n, v1d());
    //= vector<int> v(n,())
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        for (int j = 0; j < size; j++){
            int num;
            cin >> num;
            v[i].push_back(num);
        }
    }
    
    for (int i = 0; i < p ; i++){
        int x, y;
        cin >> x >> y;
        cout << v[x][y] << endl;
    }
    return 0;
}