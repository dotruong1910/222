// #include<iostream>
// #include<math.h>
// using namespace std;
// // string getday(int daynum)
// //         {string dayname;
// //                 // if(daynum == 0)
// //                 //     {dayname= "sunday";}

// //         return dayname;}
// void delta(double a, double b, double c)
//         {
//         if(a==0 && b==0 && c==0)
//                 {cout<<"phuong trinh vo so nghiem";
//                 return;}
//         if(a==0 && b==0)
//                 {cout<<"phuong trinh vo nghiem";
//                 return;}
//         if(a==0 && b!=0)
//                 {cout<<"phuong trinh co 1 nghiem la "<<-c/b;
//                 return;}
//         double x1;
//         double x2;
//         double del;
//             del= b*b-(4*a*c);
//                 if(del==0)
//                     {x1=(-b/(2*a));
//                     cout<<"phuong trinh co nghiem kep"<<x1;}
//                 else if (del>0)
//                     {del= sqrt(del);
//                     x1= (-b-del)/(2*a);
//                     x2= (-b+del)/(2*a);
//                         cout<<"phuong trinh co 2 nghiem phan biet"<<endl;
//                             cout<<"x1= "<<x1<<endl;
//                             cout<<"x2= "<<x2;}
//             else if (del<0)
//                     {cout<<"phuong trinh vo nghiem";}
//         }
// // int max(int n1, int n2, int n3)
// //     {   int result;
// //         if  (n1 >= n2 && n1>=n3)
// //             {result = n1;   }
// //         else if (n2 >= n1 && n2>=n3)
// //             {result = n2;   }
// //         else if (n3 >= n1 && n3>=n2)
// //             {result = n3;   }
// // return result;
// //     }
// //  int main()
// //{double a,b,c;

// //cout<<"nhap so a ";
//  //               cin>>a;
// //cout<<"nhap so b ";
// //cin>>b;
// //cout<<"nhap so c ";
//            //     cin>>c;
// //    delta(a,b,c);
// //}
//     //  bool ismale = true;
//     //  bool istall = false;
//     //      if(ismale && istall)
//     //          { cout<<"you are a tall male ";}
//     //     else if (ismale && !istall)
//     //         { cout<<"you are a short male";}
//     // return 0;                           }
// //     #include<iostream>

// // using namespace std;

// // int main() {
// // string p1,p2;
// // cout>>"nhap ten: "<<endl;
// // cin>>p1;
// // cout>>"nhap dia chi: "<<endl;
// // cin>>p2;

// // cout<<"Name: "<<p1;
// // cout<<"Address"<<p2;
// // return 0;
// // }
// #include <cmath>
// #include <iostream>
// using namespace std;

// int main() {
//     int i, so1, so2, min, ucln = 1;

//     cout << "Nhap so thu nhat: ";
//     cin >> so1;
//     cout << "Nhap so thu hai: ";
//     cin >> so2;
//     if(so1 == 0 && so2 == 0) {
//         cout << "Hai so 0 khong co uoc chung lon nhat" << endl;
//     } else if (so1 != 0 && so2 == 0) {
//         cout << "Uoc chung lon nhat cua " << so1 << " va " << so2 << " la " << abs(so1) << endl;
//     } else if (so1 == 0 && so2 != 0) {
//         cout << "Uoc chung lon nhat cua " << so1 << " va " << so2 << " la " << abs(so2) << endl;
//     } else {
//         if(so1 < so2) {
//             min = so1;
//         } else {
//             min = so2;
//         }

//         for(int i = 1; i <= min; i++) {
//             if(so1%i == 0 && so2%i == 0) {
//                 ucln = i;
//             }
//         }
//         cout << "Uoc chung lon nhat cua " << so1 << " va " << so2 << " la " << ucln << endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int so;
//     cin>> so;
//     int i=1;
//     bool a=true;
//     while(i<=so){
//         if(i*i==so){ so=a;
//             return 0;
//         }
//         i++;
//         cout<<so<<endl;}

//     if((so%3==0)&&(so%5==1)&&(a)){cout<<"YES";}
//     else{cout<<"NO";}
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int m, n, q, x, y;
    cin >> m >> n >> q;
    int matran[m][n];
    for (int i = 0; i < m; i++) // cham dau tien
        for (int j = 0; j < n; j++)
            cin >> matran[i][j];

    for (int i = 0; i < q; i++)
    {
        cin >> x;
        cin >> y;
        cout << matran[x - 1][y - 1] << endl;
    }
    return 0;
}
