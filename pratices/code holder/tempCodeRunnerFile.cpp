#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int cuoi=s.size();
	for (int i=s.size()-1; i>=0; i--)
    {
    	if(s[i]==' ')
    	{
    		for (int j=i+1; j<cuoi; j++)
    		{
    			cout << s[j];
			}
			cout << " ";
			cuoi=i;
		}
		
		if(i==0)
		{
			for (int j=0; j<cuoi; j++)
			cout << s[j];
		}
	}
 return 0;
}