void grade10(const char* path){
    ifstream f;
    f.open(path);
    string stt,ho,ten,ngaysinh,daiso,thcs4,thcs1;
    string s;
    getline(f,s);
    while(f.good()){
        getline(f,stt,',');
        getline(f,ho,',');
        getline(f,ten,',');
        getline(f,ngaysinh,',');
        getline(f,daiso,',');
        getline(f,thcs4,',');
        getline(f,thcs1);
        if(thcs4 == "10") cout << ho<<" "<<ten<<endl;
    }
}
void grade10(const char* path){
    ifstream f;
    f.open(path);
    while(f.good()){
    string stt,ho,ten,ngaysinh,daiso,thcs4,thcs1;
        
    string s;
    getline(f,s);
    cout<<s<<endl;
    }
}
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
    int sum = 0;
    int max = 0;
    int pos = 1;
    while(pos <= numOfHouses){
        if(houses[pos] < houses[pos-1]){
            max = houses[pos-1];
            pos = pos - 1;
        }
        if(houses[pos] > houses[pos-1]){
            max = houses[pos];
        }
        sum+=max;
        pos+=3;
    }
    return sum;
}