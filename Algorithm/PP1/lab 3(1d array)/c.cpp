// maximum in array
 #include <iostream>
 using namespace std;
 int main (){
     int n;
     cin>>n;
     int a[500500];

     for(int i=0;i<n;++i)
     cin>>a[i];

     int maxi=-1e9-17;
     for(int i=0;i<n;++i)
     {if(a[i]>maxi)
     maxi=a[i];}


     cout << maxi;

     return 0;
 }