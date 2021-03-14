//
//  main.cpp
//  NMLT
//
//  Created by Nguyen Minh Thuan on 1/12/21.
//  Copyright © 2021 Nguyen Minh Thuan. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

struct Vector{
    double x, y;
    Vector(){}
    Vector(double _x, double _y){
        x = _x;
        y = _y;
    }
    
    Vector add(Vector v2){
        Vector sum;
        sum.x = x + v2.x;
        sum.y = y + v2.y;
        return sum;
    }
    
    Vector operator+(Vector v2){
        Vector sum;
        sum.x = x + v2.x;
        sum.y = y + v2.y;
        return sum;
    }
    Vector operator-(Vector v2){
        Vector diff;
        diff.x = x - v2.x;
        diff.y = y - v2.y;
        return diff;
    }
    
    double distance(){
        return sqrt(x*x + y*y);
    }
    
    bool operator>(Vector v2){
        if (distance() > v2.distance()){
            return true;
        }
        return false;
    }
    
    void print(){
        cout<<x<<" "<<y<<endl;
    }
};

void print(Vector* v){
    cout<<(*v).x<<endl;
    cout<<v->x<<endl;
}

void nhap(Vector& v){
    cin>>v.x>>v.y;
}

istream& operator>>(istream& in, Vector& v){
    in>>v.x>>v.y;
    return in;
}

ostream& operator<<(ostream& out, Vector& v){
    out<<"("<<v.x<<"; "<<v.y<<")"<<endl;
    return out;
}

Vector sum_list(Vector arr[], int n){
    Vector sum(0, 0);
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

void sortVector(Vector arr[], int n){
    for(int i = n-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                Vector t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int n; cin>>n;
    Vector arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    sortVector(arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i];
    }
    return 0;
}
