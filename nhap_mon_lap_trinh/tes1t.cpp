#include <bits/stdc++.h>
using namespace std;

int remove(int a[], int n, int pos){
    for (int i=pos; i<n; i++)
        a[i]=a[i+1];
    return n-1;// giam so phan tu cua mang di 1
}

int main () {
    int n,a[1001],b[1001],c[1001],k;int dem =0;
    cin >> n;
    k=n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        b[i]=a[i];
        c[i]=1;
    }
    for (int i=1; i<=k; i++){
        //cout << "i= " << i <<" ";
        for (int j=i+1; j<=k; j++)
            if (b[i]==b[j]) {
                k=remove(b,k,j);
                c[i]++;
            }
        //cout<<"k= "<<k<<" ";
        //for (int i=1; i<=k; i++) cout << b[i] <<" "; cout<<"(Sau remove)"<<endl;
    }
    for (int i=1; i<=k; i++){
        cout<<b[i]<<" ";
        cout<<c[i]<<endl;
    }
    return 0;
}