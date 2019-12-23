#include <iostream>
using namespace std;

int main (){
    int l,r,n;
    long long sum=0;
    cin>>n;
    int a[n];
    cin>>l>>r;

    for(int i=1;i<=n;++i)
    cin>>a[i];
    
    for(int i=l;i<=r;++i)
    sum+=a[i];

    cout<<sum;

    return 0;
      }