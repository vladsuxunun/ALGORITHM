 #include <iostream>
 #include <algorithm>
 using namespace std;
 int modadd(int a,int b, int x){
     int sum=0,dividing=0;
     sum=(a+b);
     dividing=sum % x;
     return dividing;
         }
         int main(){
             int a,b,x;
             cin >> a >> b >> x;
             cout<<modadd(a,b,x);

             return 0;

         }