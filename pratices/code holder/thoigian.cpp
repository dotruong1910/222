#include <iostream>
#include<math.h>

using namespace std;

struct Time
{
    int hour, minute, second;
    Time(int initHour, int initMinute, int initSecond)
    {
        //your code here
        initHour = hour;
        initMinute = minute;
        initSecond =second;
    }
    void getTimeDifference(Time other)
    {
        //your code here
        if(hour > other.hour && minute > other.minute && second > other.second){
            hour =  hour - other.hour;
            minute = minute - other.minute;
            second= second - other.second;
        }
        else if(hour > other.hour && minute > other.minute && second <= other.second){
            hour = hour - other.hour;
            minute = minute - other.minute;
            second = other.second + second;
        }
        else if(hour < other.hour && minute < other.minute && second > other.second){
            hour = other.hour - hour;
            minute = other.minute -minute;
            second= other.second + second;
        }
        else if(hour < other.hour && minute < other.minute && second <other.second){
            hour = other.hour - hour;
            minute=other.minute - minute;
            second = other.second -second;
        }
        if(minute == 1){
            minute = 0;
            cout<<"0"<<hour<<":"<<"0"<<minute<<":"<<abs(second);
        }
        else cout<<"0"<<hour<<":"<<minute<<":"<<second;
    }
};

int main()
{
    int hour, minute, second;
    Time time1(hour,minute,second);
    cin >> time1.hour >> time1.minute >> time1.second;
    Time time2(hour,minute,second);
    cin >> time2.hour >> time2.minute >> time2.second;
    time1.getTimeDifference(time2);
    
    return 0;
}
#include<cstring>
void pad_left(char* s, int n){
    int l = strlen(s);
    if(n >= l ){
        for(int i = 0 ; i<n+1; i++){
            s[n-i]=s[l-1-i];
        }
        for(int i = 1 ; i <l;i++){
            s[i]='_';
        }
        
    }
}