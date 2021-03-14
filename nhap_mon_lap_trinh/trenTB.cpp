#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double u;
    int n;
    cin >> n;
    double day[n];
    double tong;
    for (int i = 0; i < n; i++)
    {
        cin >> day[i];
        tong += day[i];
    }
    u = tong / n;

    for (int j = 0; j < n; j++)
    {

        if (day[j] >= u)
        {

            cout << setprecision(2) << fixed << day[j] << " ";
        }
    }
}
