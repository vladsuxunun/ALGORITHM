 #include <iostream>
 using namespace std;
 int main(){
     int a,b,c,d,x;
     cin >> a >> b >> c >> d;  // ax-b=cx+d    ax-cx=b+d     x(a-c)=b+d      x=b+d/a-c
     x=(b+d)/(a-c);  // 2 3 1 2

     cout<<x;

     return 0;

 }