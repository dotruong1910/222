#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int vang = 10;
    int CC;
    double GK;
    double sum, TK, TH;
    //cout << "nhap so buoi hoc ly thuyet: ";
    cin >> n;
    double diembaitap[10];
    double diemgiuaki[2];
    double Cuoiky;
    double sangtao;
    for (int i = 0; i < 10; i++)
    {   //diem bai tap
        // cout<<"nhap diem bai "<<i+1<< ":";
        cin >> diembaitap[i];
    }
    for (int i = 0; i < 2; i++)
    { // diem giua ki
        cin >> diemgiuaki[i];
    }
    cin >> Cuoiky >> sangtao; // diem cuoi ky, sang tao
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        { // sap xep diem bai tap giam dan
            if (diembaitap[i] <= diembaitap[j])
            {
                double tmp = diembaitap[i];
                diembaitap[i] = diembaitap[j];
                diembaitap[j] = tmp;
            }
        }
    }
    /*for(int i = 0; i < 10; i++){
        cout<<" "<<diembaitap[i]<<" ";
    }*/
    for (int i = 0; i < 5; i++)
    { // tong 5 bai cao nhat
        sum += diembaitap[i];
    }
    for (int i = 0; i < 10; i++)
    { // dem so buoi vang
        if (diembaitap[i] == 0)
        {
            vang--;
        }
    }

    TH = sum / double(5);
    CC = vang + n;
    GK = (diemgiuaki[0] + diemgiuaki[1]) / 2.0;
    TK = 0.2 * (sum / 5.0) + 0.2 * GK + 0.6 * (sangtao + Cuoiky);
    if (CC < 20)
    {
        cout << "0.0";
    }
    if (CC >= 20)
    {
        if (TK > 10.0)
        {
            cout << "10.0";
        }
        else
        {
            cout << fixed << setprecision(1) << roundf(TK * 10) / 10;
        }
    }
}