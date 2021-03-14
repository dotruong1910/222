#include<iostream>
using namespace std;

void inPut(int arr[], int n);
void outPut(int arr[], int n);
void removeOne(int arr[], int n, int id);
void howMany(int arr1[], int arr2[],int n );
void cheatOfMe(int myArr1[], int myArr2[], int nSize);
void endGame(int myArr1[], int myArr2[], int nSize);

void inPut(int arr[], int n)
{
    for (int i=0; i <n; i++){
        cin >> arr[i];
    }
}

void outPut(int arr[], int n)
{
    for( int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}


void removeOne(int arr[], int n, int id)
{
    for (int i=id; i<n;i++){
        arr[i] = arr[i+1];
    }
}

void howMany(int arr1[], int arr2[],int n )
{
        for (int i =0; i<n; i++){
            for (int j=i+1; j<n;j++){
                   if ( arr1[i] == arr1[j]){
                    arr2[i] = arr2[i] + 1;
                    }
                    
            }
        }
}
void cheatOfMe(int myArr1[], int myArr2[], int nSize)
{
    for (int i =0; i<(nSize-1); i++){
            for (int j=i+1; j<nSize;j++){
				if ( myArr1[i] == myArr1[j]){
					myArr1[j]=100;
				}
			}
			}
}
void endGame(int myArr1[], int myArr2[], int nSize)
{
    for (int i =0; i<nSize; i++){
		if ( myArr1[i] != 100){
			 	cout << myArr1[i] << " "<< myArr2[i]-100  <<endl;
		}
	}	
}


int main(){
    int myArr1[20]{4,5,9,4,5};
    int myArr2[20]{101,101,101,101,101,101,101,101 ,101,101,101,101,101,101,101};
    int nSize;
    cin >> nSize;
    inPut(myArr1,nSize);
    howMany(myArr1,myArr2,nSize);
    cheatOfMe( myArr1, myArr2, nSize);
    endGame(myArr1, myArr2, nSize);
    return 0;
}