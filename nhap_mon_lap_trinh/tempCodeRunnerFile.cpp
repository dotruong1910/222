#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int x,y;
    cin >> x >> y;
    char tmp = s[x-1];
    s[x-1]= s[y-1];
    s[y-1]=tmp;
    
    cout<<s;
}
void inputMatrix(int** matrix, int nRows, int nCols){
    for(int i = 0; i < nRows ; i ++){
        for(int j = 0; j < nCols; j++){
            cin >> matrix[i][j];
        }
    }
}
int isSymmetric(int** matrix, int nRows, int nCols){
    int i = 1;
    int j = nRows -2 ;
    int h = nRows-1;
    int check = 1;
    if(nRows > nCols) return 0 ;
    else if(nRows < nCols) return 0 ;
    else if(nRows = nCols){
    while(i < nRows && j >0 && i >=j){
        if(matrix[i,0] == matrix[0,i] && matrix[h,j] == matrix[j,h] ){
            check = 1;
            i++;
            j--;
        }
        else {
            check = 0 ;
            break;
        }
    }
    if(check == 1 ) return 1;
    else if(check == 0) return 0;}
}
