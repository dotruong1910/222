#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, gsize;//gsize: gan cho gia_tri vs so_lan
    int arr[1000], gia_tri[1000], so_lan[1000];
    bool ok[1000];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    gia_tri[0] = arr[1];
    so_lan[0] = 1;
    gsize = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= gsize - 1; j++)
            if (gia_tri[j] == arr[i])
                {
                    so_lan[j] = so_lan[j] + 1;
                    ok[i] = true;
                    break;
                }
            if (ok[i] == false)
            {
                gia_tri[gsize] = arr[i];
                so_lan[gsize] = 1;
                gsize = gsize + 1;
            }
    }
    for (int i = 0; i <= gsize - 1; i++)
        cout << "So " << gia_tri[i] << " xuat hien " << so_lan[i] << " lan." << endl;
    return 0;
}
