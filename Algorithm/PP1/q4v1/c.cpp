 #include <iostream>
 #include <algorithm>

 using namespace std;

 int main (){
     int n;
     cin>>n;

     if(n==0)
     {cout<<"EAGLE";
     return 0;}

     if(n%2==0)
     cout<<"EAGLE";
     else cout<<"TAILS";

     return 0;
 }