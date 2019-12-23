// position of maximum
 #include <iostream>
 using namespace std;
 int main (){
     int n;
     cin>>n;
     int i;
     int a[500500];

     for(i=1;i<=n;i++)
     cin>>a[i];
     
     int pos;
     int maxi=-1e9-17;
     
     for(i=1;i<=n;i++)
     {
         if(a[i]>maxi)
          maxi=a[i]; pos=i;
     }

     cout << pos;

     return 0;

 }