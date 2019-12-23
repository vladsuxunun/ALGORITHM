#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int cola,n,sum=0;
    cin>>cola>>n;
     int a[n];

     for(int i=0;i<n;++i)
     cin>>a[i];

     for(int i=0;i<n;++i)
     sum+=a[i];

     if(sum<=cola)
     cout<<"YES";
     else 
     cout<<"NO";
      return 0;}