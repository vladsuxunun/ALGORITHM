 #include <iostream>
 using namespace std;
 int main (){
     int n;
     cin>>n;
     int a[10000];

     for(int i=1;i<=n;++i)
     {cin>>a[i];}

     for(int i=2;i<=n-1;++i)
     {if(a[i]>0 && a[i-1]>0 || a[i]<0 && a[i-1]<0)
     cout<<"YES";
     return 0;
     }
      
       cout<<"NO";

     return 0;
 }