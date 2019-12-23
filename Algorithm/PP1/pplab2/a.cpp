 #include <iostream>
 using namespace std;
 int main (){
     int n,m;
     long long sum=0;
     int a[n][m];
     cin>>n>>m;
     int min=1e9;


     for(int i=1;i<=n;++i){
     for(int j=1;j<=m;++j)
      cin>>a[i][j];
     }
     cout<<"coordinates of min elements:"<<endl;
     for(int i=1;i<=n;++i){
     for(int j=1;j<=m;++j)
     {if(a[j][i]<min)
     min=a[j][i];
            