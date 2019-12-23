 #include <iostream>
 using namespace std;
 int main (){
     int n;
     cin>>n;
     int a[35];
    
     for(int i=1;i<=n;++i)
     cin>>a[i];

     for(int i=1;i<=n;++++i){
         for(int j=2;j<=n;++++j)
     {swap(a[i],a[j]);
     }
     }

     for(int i=1;i<=n;++i)
     cout<<a[i]<<" ";

     return 0;
 }