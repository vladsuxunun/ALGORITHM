 #include <bits/stdc++.h>
 using namespace std;
 int main (){
     vector<int>v;

     int n,sum=0;
     cin>>n;
     int a[n];

     for (int i=0;i<n;++i)
     cin>>a[i];

     for(int i=0;i<n;++i)
     {sum=a[i]+a[i+1]+a[i+2];
     v.push_back(sum);
     }
     sort(v.begin(),v.end());
     
     cout<<v[0];

     return 0;

     }