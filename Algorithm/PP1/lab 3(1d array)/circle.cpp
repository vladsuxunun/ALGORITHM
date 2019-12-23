 #include <iostream>
 
 using namespace std;
 int main(){
     int n;
     cin>>n;
     int a[100];
     int i;
    
     for(i=1;i<=n;++i)
     cin>> a[i];
     for(i=1;i<=n;++i)
     {if(a[i]!=a[i-1])
     cout<<a[i]<<" ";}

     return 0;

 }