 #include <iostream>
 #include <algorithm>

 using namespace std;
 int main (){
     int n;
     cin >> n;
     int a[n][n];

     for(int i=0;i<n;++i){
     for(int j=0;j<n;++j)
     a[i][j]=0;
     }

     for(int i=0;i<n;++i){
     for(int j=0;j<n;++j)
     {if(i==j)
     a[i][j]=1;
     a[n-1-i][i]=1;
     }
     }

     for(int i=0;i<n;++i){
     for(int j=0;j<n;++j)
     cout<<a[i][j]<<" ";
     cout<<endl;
     }

     return 0;
      }