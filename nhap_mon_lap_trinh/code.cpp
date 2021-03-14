// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main()
// {
//     int radious; // ban kinh
//     cin>> radious;
//     double diameter;// duong kinh
//     diameter = radious* 2;
//     double circum; // chu vi
//     circum= diameter*3.14;
//     double whole;// dien tich
//     whole= radious*radious *3.14;
//     cout<<diameter<<endl;
//     cout<<fixed<<setprecision(2)<<circum<<endl;
//     cout<<fixed<<setprecision(2)<<whole <<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     if ( n<0){n=abs(n);}
//     cout<< n*n;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int phandu, phannguyen;
//     phannguyen = n / 10;
//     while (phannguyen >= 0)
//     {
//         phannguyen = phannguyen / 10;
//         phandu == phannguyen % 10;
//         cout << phandu << endl;
//}
// if(phannguyen=0){phandu=phannguyen%10;}}

//cout<<phandu;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     char n;
//     cin >> n;
//     if ('a' <=  n&&n <= 'z')
//     {
//         cout << "The upper case character corresponding to " << n << " is " << char(n - 32);
//     }
//     else
//     {
//         if ('A' <= n&&n <= 'Z')
//         {
//             cout << "The lower case character corresponding to " << n << " is " << char(n + 32);
//         }
//         else
//         {
//             if (' ' >= n && n < 'A' || 'Z' < n < 'a' || 'Z' < n <= '~')
//             {
//                 cout << n << " is not a letter";
//             }
//         }

//         return 0;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int quangduong;
//     cin >> quangduong;
//     int tongtien;
//     if (0 < quangduong && quangduong <= 30)
//     {
//         tongtien = 7000 + (quangduong - 2 + 1) * 5000;
//     }
//     else
//     {
//         if (quangduong > 30)
//         {
//             tongtien = 7000 + 29 * 5000 + (quangduong - 30) * 3000;
//         }
//     }
//     cout << tongtien;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int giobatdau, gioketthuc, somay;
//     cin >> giobatdau >> gioketthuc >> somay;
//     if (giobatdau >= 6 && giobatdau < gioketthuc && gioketthuc < 21 && gioketthuc > giobatdau)
//     {
//         if (
//             gioketthuc <= 17)
//         {
//             cout << (gioketthuc - giobatdau) * 2500 * somay;
//         }
//         if (gioketthuc > 17 && giobatdau <= 17)
//         {
//             cout << ((17 - giobatdau) * 2500 + (gioketthuc - 17) * 3000) * somay;
//         }
//         if (gioketthuc > 17 && giobatdau > 17)
//         {
//             cout << ((gioketthuc - giobatdau) * 3000) * somay;
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int gbd;
//     int gkt;
//     cin >> gbd >> gkt;
//     if(gbd<100 && gkt < 100 && gbd <gkt && gbd>=6 &&gkt>6 && gbd <18 ){
//         if(gbd>=6 && gkt <=12 && gbd<12){
//             cout<<(gkt-gbd)*6000;
//             }
//         else if (gbd>6 && gbd<12 && gkt >12 && gkt<18){
//             cout<<(12-gbd)*6000+(gkt-12)*7500;
//         }
//         else if (gbd>=12 &&gkt <=18){
//             cout<<(gkt-gbd)*7500;
//         }

//         }
//     return 0;

// }
/*#include <iostream>
using namespace std;
int main()
{
    int abc;
    int sodaonguoc;
    cin >> abc;
    int a; // chu so dau tien trong abc
    a = abc / 100;
    int c; // chu so thu 3 trong abc
    c = abc % 10;
    if (a > c)
    {
        int songuyen;
        int sodu;
        int sodu2;
        for (int i = 0; i < 2; i++)
        {
            sodu = abc % 10;
            songuyen = abc / 10;
            sodu2 = songuyen % 10;
            songuyen = abc / 100;

            sodaonguoc = (sodu * 10 + sodu2) * 10 + songuyen;
        }
        int b; // hieu so abc-so dao nguoc abc
        b = abc - sodaonguoc;
        for (int i = 0; i < 2; i++)
        {
            sodu = b % 10;//dao so c
            songuyen = b / 10;//luu hai so ab vao 1 bien nao do
            sodu2 = songuyen % 10;//dao so b
            songuyen = b / 100;//so a

            sodaonguoc = (sodu * 10 + sodu2) * 10 + songuyen;//(c*10+b)*10+a
        }
        cout << b + sodaonguoc;
    }
    else if (a < c || a == 0 || c == 0 || a == c)
    {
        cout << "invalid";
    }
}*/
// dao nguoc so
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    cin >> a[i];

    int appeared[n];
    for (int i = 0; i < n; i++)
    appeared[i] = 0;

    for (int i = 0; i < n; i++)
        {
        if (appeared[i] == 0)
        {
            int count = 0;
            for (int j = i; j < n; j++)
            {
                if (a[i] == a[j]){
                    count += 1;
                    appeared[j] = 1;
                }
            }
            cout << a[i] << " " << count << endl;
        }
    }
return 0;
}