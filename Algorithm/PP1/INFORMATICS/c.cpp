 #include <iostream>
 using namespace std;
 int main(){
     int n,cnt=0;
     cin>>n;
     int a[100];

     for(int i=1;i<=n;++i)
     cin>>a[i];

     for(int i=2;i<=n-1;++i)
     {if(a[i-1]<a[i] && a[i+1]<a[i])
     cnt++;
     }

     cout<<cnt;

     return 0;
 }