/* #include<iostream>
using namespace std;
int main()
{
    int n,x,y;
    //cout<<"nhap n: ";
    cin >> n;
    int a[1001];
    for(int i = 0; i < n; i++){
       // cout<<"a["<<i<<"]= ";
        cin >> a[i];
    }
    cin >> x >> y;
    for(int i = n ; i >= y; i--){//code chen so vao mang
        int tmp=a[i-2];
        a[i]=a[i-1];
        a[i-1]=tmp;
    }
    a[y-1]=x;
    for(int i = 0; i<n+1;i++){
       cout<<a[i]<<" ";
   }
} */
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    int tong =0;
    cin>> n;
    int a[1000];
    for(int i = 0; i < n;i++){
        cin>> a[i];
    }
    for(int i =0 ; i < n; i++){
       
        if(i==0 && a[i] < a[i+1]|| i == n-1 && a[i]<a[i-1]){
            tong+=a[i];
            
        } 
        else if(a[i] < a[i+1] && a[i]<a[i-1]){
            tong+=a[i];
            
        }
      
        
    }
    cout<<tong;
} */
/* #include<iostream>
using namespace std;
bool Prime(int n){
    if( n==2) return true;
    else if (n<2) return true;
    for(int i = 2 ; i < n/2 ; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    int a[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin>> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(Prime(a[i]) && Prime(a[j])){
                if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j]=tmp;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
   return 0;
    
} */
/* #include<iostream>
using namespace std;
bool Sole(int n){
    if(n % 2 == 0) return false;
    return true;
}
int main(){
int n;
cin >> n;
int a[100];
for(int i  = 0 ; i < n; i++){
    cin >> a[i];
}
for(int i =0 ; i < n; i++){
    for(int j = 0; j < n; j++){
        if(Sole(a[i]) && Sole(a[j]) && a[i] < a[j]){
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;

        }
    }
}
for(int i  = 0 ; i < n; i++){
    cout << a[i]<<" ";
}
}
 */
/* #include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int a[100];
int danhdau;
for(int i  = 0 ; i < n; i++){
    cin >> a[i];
}

for(int i =0 ; i < n; i++){//sap xep chan le
    for(int j = i; j < n; j++){
        if(a[j]%2 == 0 ){
            int tmp = a[i];
            a[i] = a[j];
            a[j]= tmp;
            break ;
        }
    }
}
for(int i =0 ; i < n; i++){
    if(a[i]%2==0){
        danhdau = i;
    }
}
//cout<<danhdau<<endl;
for(int i = 0; i<=danhdau; i++){
    for(int j= 0; j<= danhdau; j++){
        if( a[i] < a[j]){
            int tmp = a[i];
            a[i] = a[j];
            a[j] =tmp;
        }
    }
}
for(int i = danhdau+1; i < n; i++){
    for(int j= danhdau+1; j< n; j++){
        if( a[i] > a[j]){
            int tmp = a[i];
            a[i] = a[j];
            a[j] =tmp;
        }
    }
} 
for(int i  = 0 ; i < n; i++){
    cout << a[i]<<" ";
}
} */
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    int sotrungvi;
    if (n % 2 != 0)
    {
        cout << fixed << setprecision(1) << double(a[(n - 1) / 2]);
    }
    if(n % 2 == 0)
    {
        int tmp2;
        tmp2 = double(n) / 2;
        cout << fixed << setprecision(1) << double((a[tmp2] + a[tmp2 - 1]) / 2);
    }
}
/* void findMedian(int arr[], int nSize)
{
    if (nSize % 2 != 0)
    {
        int temp1;
        temp1 = (nSize - 1) / 2;
        cout << fixed << setprecision(1) << double(arr[temp1]);
    }
    if (nSize % 2 == 0)
    {
        int temp2;
        temp2 = nSize / 2;
        cout << fixed << setprecision(1) << double((arr[temp2] + arr[temp2 - 1])) / 2;
    }
} */
