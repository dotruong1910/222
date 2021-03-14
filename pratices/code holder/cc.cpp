#include<iostream>
using namespace std;
int daonguocso(int n){
    int origin = n/10;
    int phandu = n%10;
    int sodao = phandu*10+origin;
    return sodao;
}
int ucln(int c, int  d){
    while(c != d){
        if(c > d){
            c = c-d;
        }
        else
            d = d -c;
    }
        return c;
}
bool chung(int a, int b){
    if(ucln(a,b) != 1) return false;
    return true;
}
int main(){
    int n;
    cin >> n;
   // daonguocso(n);
    int count =0;
    int arr2[1000];
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++){
        if(chung(arr[i],daonguocso(arr[i]))){
            arr2[count] = arr[i];
            count++;
        }
    }
    for(int i = 0; i < count; i ++){
        cout<<arr2[i]<<" ";
    }
} 


#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int main(){
    vector<string> ques;
    vector<string> solve;
    string line, word;
    getline(cin, line);
    stringstream str(line);
    while (str.good()){
        str >> word;
        ques.push_back(word);
    }
     
    // cout<<"\n";
    solve.push_back(ques[0]);
    
    for (int i = 1; i < ques.size(); i++){
        if (ques[i] != ques[i-1]){
            solve.push_back(ques[i]);
        }
    }
    for (int i = 0; i < solve.size(); i++){
        cout << solve[i] << " ";
    } 
    return 0;
}


