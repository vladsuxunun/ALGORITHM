 #include <iostream>
 #include <algorithm>

 using namespace std;
 char m(int p){
     if(p>=10)
     return 'A'+p-10;
     return p+'0';
     }
     void f(int n){
         if(n==0) return;
         f(n/16);
         cout<<m(n%16);
     }
     int main (){
         int n;
         cin>>n;
         f(n);
         return 0;
     }