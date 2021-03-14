#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
     string s;
     cin >> s;
     ifstream file;
     file.open(s,ios::in | ios::binary);
     while(file.good() && file.eof()){
         int data;
         file.read((char*) &data ,sizeof(data));
         if(file) cout<< data << " ";
     }
    file.close();
}