 #include <iostream>
 #include <algorithm>
 #include <vector>

 using namespace std;
 int main (){
     vector<int>a;
     int n,x,sum=0;
     cin>>n;

     for(int i=0;i<n;++i)
     {cin>>x;
     a.push_back(x);
     }

     sort(a.begin(),a.end());
     reverse(a.begin(),a.end());

     int k;
     cin>>k;

     for(int i=0;i<k;++i)
     sum+=a[i];

     cout<<sum;

     return 0;

 }