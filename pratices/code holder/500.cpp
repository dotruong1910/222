#include<iostream>
using namespace std;
int** getImage (int nRows, int nCols){
    int** image;
    image = new int*[nRows];
    for(int index = 0; index < nRows; index ++){
        image[index] = new int[nCols];
    }
    for(int i = 0; i < nRows;i ++){
        for(int j = 0;j < nCols; j++){
            cin >> image[i][j];
        }
    }
    return image;
}
void fillImage (int** image, int nRows, int nCols, int threshold){
    
    for(int i = 0; i < nRows; i++){
        for(int j= 0; j < nCols;i++){
            if(image[i][j] < threshold) image[i][j]= 0;
        }
    }
}
void print (int** image, int nRows, int nCols){
    for(int i = 0; i < nRows; i++){
        for(int j= 0; j < nCols;i++){
            cout<<image[i][j]<<" "<<endl;
        }
    }
}
int main(){
    int x,y;
    cin >> x >> y;
    getImage(x,y);
   

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
