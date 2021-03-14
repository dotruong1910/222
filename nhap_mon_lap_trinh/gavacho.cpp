#include <iostream>
 using namespace std;
 int  main()
 {
 double tcon ;

 double tchan;
 cin>> tcon;
 cin>> tchan;
 double x;
 double y;
 y=(tchan-2*tcon)/2;
 x=tcon -y;
 if(y<=0 || x<=0 || x-((int)x)!=0||y-((int)y)!=0){cout<<"invalid";}
 
 else{cout<<"chicken= "<<x<<", dog= "<<y;}
      
      return 0;}