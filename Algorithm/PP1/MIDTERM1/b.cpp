 #include <iostream>
 #include <algorithm>
 using namespace std;
 int main(){
     int a,b;
     cin>>a>>b;
     int perimetr=0,area=0;
     perimetr=2*(a+b);
     area=a*b;

     if(perimetr>area)
     cout<<"Yes";
     else cout<<"No";

     return 0;}