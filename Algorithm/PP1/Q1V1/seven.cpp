// seven

 #include <iostream>
 
 using namespace std;
 int main (){
     int n;
     cin>>n;
     int a[100];
     int sum=0;

     for (int i=1;i<=n;++i)
     cin>>a[i];

     for(int i=1;i<=n;++i)
     {if(i%7==0)
     sum += a[i];

     }
     
     cout<<sum;

     return 0; 
 }