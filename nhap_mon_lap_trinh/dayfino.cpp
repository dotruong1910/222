#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int tong; 
    int a1 = 1, a2 = 1;//vi cong thuc là (n-2)+(n-1) but thang 3 = 1+2 mà tháng 1,2 lại có 1 đôi
    
    if (n == 1 || n == 2){
        cout<<"1";
        return 0;}
    int i = 3;
    int a;
    while (i <= n)
    {
        a = a1 + a2;
        tong=a;
        a1 = a2;
        a2 = a;
        i++;
    }
    cout<< tong;
    return 0;
}

/*#include <iostream>
//mang hai chieu

using namespace std;
int main()
{

	int m,n,q,x,y;
	cin>>m>>n>>q;
	int arr[m][n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) cin>> arr[i][j];
	for (int i = 0; i < q; i++){
		cin>>x>>y;
		cout<<arr[x - 1][y - 1]<<endl;
	}
	return 0;*/