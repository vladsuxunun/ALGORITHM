 #include <bits/stdc++.h>
 using namespace std;
 int main (){
     int dlina,house,dif=0;
     cin>>dlina>>house;
     int a[house];

     for(int i=0;i<house;++i)
     cin>>a[i];

     
     dif=a[house]-a[0];

     if(dif<=dlina)
     {cout<<"YES";}
     else 
     {cout<<"NO";}


     return 0;
       }