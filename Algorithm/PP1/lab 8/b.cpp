 #include <iostream>
 #include <vector>
 #include <algorithm>

 using namespace std;

 int main (){
     vector<int>a;

     int n,x;

     cin>>n;

     for(int i=0;i<n;++i)
     {cin>>x;
     a.push_back(x);
     }

     reverse(a.begin(),a.end());

     for(int i=0;i<n;++i)
     cout<<a[i]<<" ";

     return 0;
     }