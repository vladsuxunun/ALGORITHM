// maximum time

 #include <iostream>
 using namespace std;
 int main(){
     int n;
     cin>>n;
     int N[100];
     int cnt=0;
     int i;

     for(int i=1;i<=n;++i)
     cin >> N[i];
     int c=10000;
     for (int i=1;i<=n;++i)
     {if(N[i]<c)
       c= N[i];
       cnt++;}
      cout<<cnt;
       return 0;
 }