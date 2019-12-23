 #include <iostream>
 #include <algorithm>

 using namespace std;
 int main (){
     int n,dif=0;
     double sum=0,speed;
     cin>>n;
     int a[n];

     for(int i=0;i<n;++i)
     cin>>a[i];

     cin>>speed; 
     
     for(int i=0;i<n-1;++i)
     { dif=a[i]-a[i+1];
     if(dif<0)
     dif*=-1;
      
     sum+=dif;
      
     }
     cout<<fixed;
     cout.precision(2);
     cout<<sum/speed;

     return 0;

     }