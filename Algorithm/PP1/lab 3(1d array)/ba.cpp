//  positive numbers
 #include <iostream>
 using namespace std;
 int main(){
     int n;
     cin>>n;
     int a[500500];
     int cnt=0;
     
     for(int i=0;i<n;++i)
     cin>>a[i];

     for(int i=0;i<n;++i)      //   K P A C U B O
     {if(a[i]>0) cnt++;}

     cout<<cnt;

     return 0;
     }