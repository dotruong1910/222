// #include <iostream>
// using namespace std;
// int main()
// {
// int n,a;
// long int tich = 1;
// cin >> n;

// for (int i = 1;i<=n;i++ )
// {
//     a=2*i+1;
//     tich=tich*a;
// }
// cout<<tich;
// return 0;
// }
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     double tong = 0.0;
//     for(double i = 1.0 ; i<= n ;i++)
//     {
//         tong= tong+ (i/(i+1));
//     }
//     cout<<fixed<<setprecision(5)<<tong;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int tong=1;
//     for(int i =1 ; i<= n ; i++)
//     {
//         tong= tong+(2*i+1);
//     }
//     cout<<tong;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     int tonggiaithua=0;
//     int giaithua =1 ;
//     int h;
//     int sogiaithuado=1;
//     for(int i = 1; i<=n;i++){sogiaithuado=sogiaithuado*i;}//tinh giai thua cua so n VD: n=6 ---> 6!
//     for(int i = 1; i<n ; i++){//loop dung de tinh tong giai thua
//       giaithua =1;
//       for(int j=i; j<n ; j++)//tinh giai thua cua vd 4!   3 !    2!
//            {
//                 int h;
//                 h= n-j;
//                 giaithua=giaithua*h;

//             }
//           //cout<<" "<<giaithua;
//         tonggiaithua+=giaithua;
//         }
//         cout<<tonggiaithua+sogiaithuado;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int h =0 ;
//     int tong = 0;
//     for(int i = 1; i<=n ; i++)
//     {
//         h=0;
//         for( int j = i ; j<= n; j++)
//             {

//                 h+=i;

//             }
//     //cout <<" \n"<<h;
//     tong +=h;
//     }
// cout<<tong;
// return 0;

// }
// #include<iostream>
// #include <math.h>
// using namespace std;
//// int main()
// {
//     int n;
//    // cin >> n;
//     int tong=0;
//     double somu;
//     double h=n+1;
//     for(double i = 1; i <= n ; i++)
//     {

//         tong+=pow(i,i);
//         }

//     //cout<<tong;
// }
// #include <iostream>
// #include<stdlib.h>
// #include <string>
// #include <cstring>
// using namespace std;
// int main()
// {

//     string s;
//     cin>>s;
//     int max =0;
//     for(int i = 0 ; i<s.length();i++)
//     {
//         if(s[i]>= max)
//             {
//                 max=s[i];
//             }
//     }
//
//     cout<<max-48;

//     return 0;
// }
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin >> a >> b;
//     int n;
//     n=b;
//     for(int i = a; a <= n; i++)
//     {
//         if(i<=b){cout<<i<<" "<<fixed<<setprecision(2)<<(double(i)-32)*5/9<<" "<<((double(i)-32)*5/9)+273.15<<endl;}
//         else if(i>b){break;}
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,a0,a1;
//     cin >> n;
//     a0= 1;
//     a1= 1;
//     int tong=0;
//     int h,f;
//     if(n==1 || n== 0){cout<<0;}
//     else if(n != 0)
//     {
//         for(int i = 2; i<=n; i++)
//         {
//             tong=2*a1+a0+1;
//             a0=a1;
//             a1=tong;

//         }
//         cout<<tong;
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, a0, a1;
//     cin >> n;
//     a0 = 1;
//     a1 = 1;
//     int hieu = 0;
//     if (n == 1 || n == 0)
//     {
//         cout << 1;
//     }
//     else if (n != 0)
//     {
//         for (int i = 2; i <= n; i++)
//         {
//             hieu = 3 * a1 - a0;
//             a0 = a1;
//             a1 = hieu;
//         }
//         cout << hieu;
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     double a[1000];
//     double tong;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         tong += a[i];
//         cout << a[i];
//     }
// }
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     double a0[100];
//     int a1[100];
//     double tu=0;
//     int mau=0;
//     double trungbinh;
//     double a,b;
//     for(int i = 0 ; i < n; i++)
//     {
//         cin>> a0[i]>>a1[i];
//     }
//     for(int i = 0; i < n; i++)
//     {
//         a=a0[i]*a1[i];
//         mau+=a1[i];
//         tu+= a;
//     }
//     cout<<fixed<<setprecision(2)<<tu/double(mau);
// }
// #include<iostream>
// #include<math.h>
// #include<iomanip>
// using namespace std;
// int main()
// {
//     long int x,n;
//     cin >> x >> n;
//     double r;
//     r=0.7/100;
//     double lai=1;
//     for (int i=1 ; i<= n ; i++)
//     {
//         lai*=(1+0.007);
//     }
//     cout<<lai<<" \n";
//     lai=lai*x;
//     cout<<round(lai);

// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int tong=0;
//     for(int i=1; i < n ; i++)
//         {
//             if(n%i==0)
//             {
//               tong+=i ;
//             }
//         }
//     if(tong==n){cout<<"yes";}
//     else if(tong>n || tong < n){cout<<"no";}
// }
// #include<iostream>
// #include<iomanip>
// #include<math.h>
// using namespace std;
// int main()
// {
//     long long int a,b;
//     cin>> a >> b;
//     //a= double(a);
//     //b= double(b);
//     cout<<fixed<<setprecision(0)<<pow(a,b);
// }
// #include <iostream>
// using namespace std;
// bool isPrime(int n)
// {
//     if (n < 2)
//         return false;
//     else if (n == 2)
//         return true;
//     else
//     {
//         for (int i = 2; i <= n / 2; i++)
//         {
//             if (n % i == 0)
//                 return false;
//         }
//         return true;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     if (isPrime(n))
//         cout << "Prime.";
//     else
//         cout << "Not a prime.";
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for(int i = n ; i > 0; i--)
//         {
//             for(int j =i; j>0;j-- )
//                 {
//                     cout<<"*"<<endl;
//                 }
//         }
// }
// #include <iostream>
// using namespace std;

// int main()     // tần suất 
// {
//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     cin >> a[i];

//     int appeared[n];
//     for (int i = 0; i < n; i++)
//     appeared[i] = 0;

//     for (int i = 0; i < n; i++)
//         {
//         if (appeared[i] == 0)
//         {
//             int count = 0;
//             for (int j = i; j < n; j++)
//             {
//                 if (a[i] == a[j]){
//                     count += 1;
//                     appeared[j] = 1;
//                 }
//             }
//             cout << a[i] << " " << count << endl;
//         }
//     }
// return 0;
// }
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
    
//     int n;
//     cin>>n;
//     string s;
//     for(int k = 0; k < n; k++)
//     {
//         cin >> s;
//         for(int i = 0 ; i < s.length() ; i++)
//             for(int j = i; j < s.length() ; j++ )
//             {
//                 if( s[i] > s[j])
//                 {
//                     int tmp = s[i];
//                     s[i] = s[j];
//                     s[j] = tmp;
//                 }
//             } 
//         cout<<s<<endl;
// }
// }
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     int n;
//     int tong = 0;
//     double tuphuongsai=0;
//     cin >> n;
//     int a[100];
//     double phuongsai=0;
//     for( int i =0 ; i< n; i++)
//     {
//         cin >> a[i];
//         tong+= a[i];
//     }
//     double trungbinh = 0;
//     trungbinh= double(tong)/double(n);
//     for( int i = 0; i < n; i++)
//     {
//         tuphuongsai += (a[i]-trungbinh)*(a[i]-trungbinh);
//     }
//     phuongsai= tuphuongsai/double(n);
//     cout<<fixed<<setprecision(2)<<trungbinh<<" "<<phuongsai;
    
    
