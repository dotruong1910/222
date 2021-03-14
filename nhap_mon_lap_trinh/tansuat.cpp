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
            for (int j = i; j < n; j++)// voi moi i ta se check xem la no co bang cac so trong day ko?
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
