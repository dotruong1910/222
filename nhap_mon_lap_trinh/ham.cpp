//Check so nguyen to
bool Prime(int n){  // so nguyen to
    if( n==2) return true;
    else if (n<2) return false;
    for(int i = 2 ; i < n/2 ; i++){
        if(n % i == 0) return false;
    }
    return true;
}
//Check so le
bool Sole(int n){
    if(n % 2 == 0) return false;
    return true;
}
// Sap xep so chan len truoc so le
void Sapxep(int n, int a[]){
    for(int i =0 ; i < n; i++){
        for(int j = i; j < n; j++){
            if(a[j]%2 == 0 ){
                int tmp = a[i];
                a[i] = a[j];
                a[j]= tmp;
                break ;
            }
        }
    }
}

//sap xep chon
void Sort(int a[], int n){
    for(int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i; j < n; j++)
            if(a[j] < a[minIndex]){
                minIndex = j;
            }
        int tmp = a[i];
        a[i] = a[minIndex];
        a[minIndex]= tmp;
    }
}

// bien the sap xep chon
void Sort(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){ 
            if(a[j] < a[i]){
           
                int tmp = a[i];
                a[i] = a[minIndex];
                a[minIndex]= tmp;
            }       
        }
    }
}

//xoa mot phan tu
int Remove(int a[], int n, int pos){
    if(n == 0)
        return 0;
    for(int i = pos; i < n;i++){
        a[i] = a[i+1];
    }
    return n-1;
}

// chen mang vao mang
int insertArrayToArray(int a[], int b[],int na, int nb,int pos)
{
 for (int i=na+nb-1; i>=nb+pos; i--)
 a[i]=a[i-nb];
 for (int i=0; i<nb; i++)
 a[i+pos]=b[i];
 return na+nb;
}
// reverse in order of wordstd::string reverse_words(std::string_view s)
std::string reverse_words(std::string_view s)
{
    std::string result;
    result.reserve(s.size());
    while(!s.empty()) {
       auto i = s.rfind(' ');
       result.append(s.begin() + i + 1, s.end());
       if (i == std::string_view::npos) break;
       result += ' ';
       s = s.substr(0, i);
    }
    return result;
}