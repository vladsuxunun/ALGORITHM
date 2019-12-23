//   sum of array
  #include  <iostream>

  using namespace std;

  int main(){
    
    int n;
    cin>>n;

    int a[500000];
    int i;
    long long sum=0;

    for(i=1;i<=n;++i)
    cin>> a[i];
     for(i=1;i<=n;++i)

     sum += a[i];

     cout<<sum;

     return 0;

     }
     