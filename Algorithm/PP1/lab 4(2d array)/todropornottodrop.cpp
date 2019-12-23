// TO DROP OR NOT TO DROP?????
 #include <iostream>
 using namespace std;
 int main(){

     int n,d,index;
     int sum=0;
     int min=10000;
     cin>>n>>d;
     int a[n][d];

     for(int i=0;i<n;++i)
     for(int j=0;j<d;++j)
     cin>>a[i][j];

     for(int i=0;i<n;++i){
     for(int j=0;j<d;++j)
     sum+=a[i][j];
     if(sum<min)
     {min=sum;
     index=i;
      }
      sum=0;
      }
     cout<<++index;
     return 0;
     }