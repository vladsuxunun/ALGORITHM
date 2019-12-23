// DON'T WANNA BE PERFECT
 #include <iostream>
 #include <cmath>

 using namespace std;
 int main (){
     int n,m,y;
     cin>>n>>m;
     int a[n][m];

     for(int i=0;i<n;++i)
     for(int j=0;j<m;++j)
     cin>>a[i][j];

     for(int i=0;i<n;++i)
     for(int j=0;j<m;++j)
     {
         y=sqrt(a[i][j]);
         if(y*y==a[i][j])
         a[i][j]=y;
         }
         for(int i=0;i<n;++i){
         for(int j=0;j<m;++j)
         cout<<a[i][j]<<" ";
         cout<<endl;}
         return 0;
 }
     