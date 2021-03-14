void tachso(int n){
    int phanngan;
    int phantram;
    int phanchuc;
    int donvi;
    while(n > 0 ){
        donvi = n%10;
        n=n/10;
        phanchuc=n%10 *10;
        n=n/10;
        phantram = n%10 *100;
        n=n/10;
        phangan = n *1000;
    }

}
void intToRoman( char * path){
    ifstream f;
    f.open(path);
    while(f && !f.eof()){
        int n;
        f >> n;
        cout <<n << endl;
    }
}