//  sum of array
 #include <iostream>
 using namespace std;

 int main(){
     int n;
     cin >> n;
     long long sum=0;
     int a[500500];

     for(int i=1;i<=n;++i)
     cin>>a[i];

     for(int i=1;i<=n;++i)
     {
         sum +=a[i];
     }

     cout<<sum;

     return 0;
       
 }