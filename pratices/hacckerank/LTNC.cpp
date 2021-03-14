/*  #include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main(){
    ifstream in;
    string s;
    vector<int> v;
    v.push;
    cin >> s;
    in.open(s,ios::in|ios::binary|ios::ate);
    char* memblock;
    if(in.is_open()){
    size =in.tellg();//obtain the size of the file
    memblock = new char[size];//allocation of a memory block
                                //**large enough to hold the entire file:
    in.seekg(0,ios::beg)//set the get position at the beginning of the in
    in.read(memblock,size);
    }
    in.close();
}  */
/* int countCharacter(const char* path, char letter){
    int count = 0;
    ifstream file;
    file.open(path);
    if(file.is_open()){
        while(file&&!file.eof()){
            char c ;
            file >> c;
            if(c == letter || c == letter-32){
                count++;
            }
        }
        file.close();
    }
    return count;
} */
/* void grade10(const char* path){
    ifstream file;
    file.open(path);
    string s;
    getline(file,s);// bo dong
                    //STT,Ho,Ten,Ngay sinh,Dai so,THCS4,THCS1
    if(file.is_open()){
        while(file.good()){
            string stt,ho,ten,ngaysinh,daiso,thcs4,thcs1;
            getline(file,stt,',');
            getline(file,ho,',');
            getline(file,ten,',');
            getline(file,n  gaysinh,',');
            getline(file,daiso,',');
            getline(file,thcs4,',');
            getline(file,thcs1);
        if(thcs4 =='10') cout<<ho<<" "<<ten<<endl;
        }
    }
}
void showClue (char* path){
    ifstream file;
    file.open(path);
    while(file && !file.eof()){
        string c;
        getline(file,c);
        if(file) cout<<c;
    }
}
void housesOfHogwarts(const char* path){
    ifstream file;
   
    file.open(path);
    string name;
    getline(file,name);
    while(file && !file.eof()){
        
        string s1;
        getline(file,s1);
        if(file) cout<<s1<<endl;
    }
} */
int getMoney(int * houses, char *path){
    ifstream file;
    file.open(path);
    int i = 0;
    while(file && !file.eof()){
    file >> houses[i];
    i++;
        
    }
    
    return i;
}
int rob(int *houses, int numOfHouses){

    // mau chot bai` nay la phai so sanh so tien kiem dc
    int money[numOfHouses];
    money[0] = houses[0];
    money[1] = houses[1];
    money[2] = houses[2] + houses[0];
    for (int i=3; i<numOfHouses; i++){
        if (money[i-2]>=money[i-3]) money[i] = money[i-2] + houses[i];
        else money[i] = money[i-3] + houses[i];
    }
    int max = money[numOfHouses-1];
    if(money[numOfHouses-1]< money[numOfHouses-2]){
        max = money[numOfHouses-2];
    }
    
    return max;
}
int valid(int i,int j,int n,int a[] ){
    if(a-1 > 0)
}
void imageSmoother (char *path){
    ifstream file;
    file.open(path);
    int n;
    file >> n;
    int a[n][n];
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n;j++){
            file >> a[i][j];
        }
    }
    for(int i  = 0 ;i < n ; i++){
        
    }
}
