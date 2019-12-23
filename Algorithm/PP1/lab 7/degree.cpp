 // DEGREE LAB 7
 #include <iostream>
 using namespace std;
 int deg(int m){
 if(m==0)
 return 1;
 if(m==1)
 return 2;
 return deg(m-1)*2;
 }
 
 int main (){
     int m;
     cin>>m;

     cout<<deg(m);

     return 0;
 }