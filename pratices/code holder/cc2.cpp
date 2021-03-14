#include<iostream>

using namespace std;

void check(int board[3][3]){
    for(int i = 0; i<3; i++){
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2]){
            if(board[i][0] == 1){
                cout<<"A win";
                return;
            }
            else{ 
                cout<<"B win";
                return;
            }
        }
    }
    for(int i = 0; i<3; i++){
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i]){
            if(board[0][i] == 1){
                cout<<"A win";
                return;
            }
            else{ 
                cout<<"B win";
                return;
            }
        }
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        if(board[0][0] == 1){
            cout<<"A win";
            return;
        }
        else{ 
            cout<<"B win";
            return;
        }
    }
    if(board[2][0] == board[1][1] && board[2][0] == board[0][2]){
        if(board[1][1] == 1){
            cout<<"A win";
            return;
        }
        else{ 
            cout<<"B win";
            return;
        }
    }
    cout<<"Draw";
}
int main(){
    
     int rows, cols;
    cin>> rows >> cols;
    int board[10][10];
    for(int i=0 ; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin >> board[i][j];
        }
    }
    check(board);
    /* for(int i = 0; i<3; i++){
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2]){
            if(board[i][0] == 1){
                cout<<"A win";
                return 0;
            }
            else if(board[1][1] == 2){ 
                cout<<"B win";
                return 0;
            }
        }
    }
    for(int i = 0; i<3; i++){
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i]){
            if(board[0][i] == 1){
                cout<<"A win";
                return 0;
            }
            else if(board[1][1] == 2){ 
                cout<<"B win";
                return 0;
            }
        }
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        if(board[0][0] == 1){
            cout<<"A win";
            return 0;
        }
        else if(board[1][1] == 2){ 
            cout<<"B win";
            return 0;
        }
    }
    if(board[2][0] == board[1][1] && board[2][0] == board[0][2]){
        if(board[1][1] == 1){
            cout<<"A win";
            return 0;
        }
        else if(board[1][1] == 2){ 
            cout<<"B win";
            return 0;
        }
    }
    cout<<"Draw";
    return 0; */ 
}