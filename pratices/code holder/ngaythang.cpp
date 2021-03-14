#include <iostream>
#include<string>
using namespace std;

struct date{
    int day,month,year;
    /* date (int _day, int _month, int _year){
        _day = day;
        _month = month;
        _year = year;
    } */
   
};
bool namNhuan(date Input){
    if(Input.year % 4 == 0 && Input.year % 100 != 0  || Input.year %400 == 0)
    return true;
    return false;
}
int songaytrongthang(date Input){
    int dayofmonth;
    switch(Input.month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dayofmonth = 31;
            break;
        case 4 :
        case 6:
        case 9:
        case 11:
            dayofmonth = 30;
            break;
        case 2:
        if(namNhuan(Input)){
            dayofmonth =29;
            break;
        }
        else{
            dayofmonth =28;
            break;
        }
}
    return dayofmonth;
}
bool ngayhople(date Input){


    //kiem tra nam
    if( Input.year < 0  ) return false;
    if( Input.month< 0 || Input.month > 12) return false;
    if( Input.day  < 0 || songaytrongthang(Input) < Input.day) return false;
    return true;

}
date getNextDay(date Input){
        // them code cua ban o day
        date s;
        s.day=Input.day+1;
        s.month = Input.month;
        s.year = Input.year;
        if( s.day > songaytrongthang(Input)){
            s.month=Input.month+1;
            s.day = 1;
            if(s.month > 12){
                s.month = 1;
                s.day = 1;
                s.year=Input.year+1;
            }
        }
    return s;
    }        
int main() {
    // them code cua ban o day
    //string day,month,year;
    date In;
    char dates[11];
    cin >> dates;
    int day,month,year;
    char d[3], m[3],y[5];
    int i,j;
    for(i=0 ; i < 2 ; i++){
        d[i]=dates[i];
    }
    for(i = 3, j=0; i<5; i++,j++){
    m[j]=dates[i];
    }
    for(i = 6, j=0; i<10; i++, j++){
    y[j]=dates[i];
    }
    In.day=atoi(d);
    In.month = atoi(m);
    In.year = atoi(y);
    if(!ngayhople(In)) cout<<"INVALID";
    else{
        date s = getNextDay(In);
        if(s.day < 10 && s.month <10) cout<<"0"<<s.day<<"/"<<"0"<<s.month<<"/"<<s.year;
        else cout<<s.day<<"/"<<s.month<<"/"<<s.year;
    }
}
       
