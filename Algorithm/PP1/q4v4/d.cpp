 #include <bits/stdc++.h>
 using namespace std;
 int hello(int tg,int month){
     if(month==0){
     cout<<tg;
     return 0;
 }
  
  return hello(2*tg,month-1);
 
 }
  int main (){
     int tg,month;
     cin>>tg>>month;
    hello(tg,month);   

 }