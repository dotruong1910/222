/* #include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int row,col;
    int insert1,x;
    cin >> row >>col;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cin >> a[i][j];
        }
    }
    cin >> insert1 >> x ;
    cout <<'\n';
    for(int i = 0 ; i < row ; i++){
        for(int j = col ; j > insert1-1; j--){
            a[i][j]=a[i][j-1];
        }
    
        a[i][insert1-1]=x;    
    }
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j <=col ; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }    
} */
#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int row, col;
    int ins, x;
    cin >> row >> col;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>a[i][j];
        }
    }
    cin >> ins >> x;
    for(int j = 0 ; j <col ; j++){
        for(int i = row ; i > ins -1; i--){
            a[i][j]=a[i-1][j];
        }
        a[ins-1][j]=x;
    }
    for(int i = 0; i <= row; i++){
        for(int j = 0; j < col; j++){
             cout<<a[i][j]<<" ";
        }
    cout<<'\n';
        
    }
    
}