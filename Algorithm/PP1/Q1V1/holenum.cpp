// hole numbers

 #include  <iostream>
 using namespace std;
 int main (){

     int n;
     cin>>n;
     int a[10];
     int sum=0;

     for(int i=1;i<=n;++i)
     cin>>a[i];

     for(int i=1;i<=n;++i)
     {if(a[i] == 0 || 4 || 6 || 8 || 9)
     sum += a[i];}

     cout<<sum;

     return 0;

 }