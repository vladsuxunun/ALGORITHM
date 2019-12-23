 #include <iostream>
 #include <algorithm>
 using namespace std;
 int main (){
     int n;
     double sum=0;
     cin>>n;
     int a[n];

     for(int i=0;i<n;++i)
     cin>>a[i];

     for(int i=0;i<n;++i)
     sum+=a[i];

     cout<<fixed;
     cout.precision(2);
     cout<<sum/n;

     return 0;

     }