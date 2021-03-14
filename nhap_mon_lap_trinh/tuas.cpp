#include <bits/stdc++.h>
#define NAH -1000000
using namespace std;
int n;
int avg = 0, a[10000], dem;
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int dem = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != NAH)
        {
            printf("%d ", a[i]);
            dem = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == a[i])
                {
                    dem++;
                    a[j] = NAH;
                }
            }
            printf("%d\n", dem);
        }
    }
    return 0;
}