 #include <iostream>
 #include <algorithm>

 using namespace std;

 int main (){

     int h,d;

     cin>>h;

     if(h<=6)
     {d=h*30;}
     else d=(12-h)*30;
     cout<<d;

     return 0;
 }