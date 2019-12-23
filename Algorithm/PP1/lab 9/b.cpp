 #include <iostream>
 #include <algorithm>
 #include <vector>

 using namespace std;
 int main(){
     vector<int> a;
     vector<int> b;
     int n,s;
     cin>>n;

     for(int i=0;i<n;++i)
     {cin>>s;
     a.push_back(s);
     b.push_back(s);
     }
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());

     for(int i=(a.size()-1);i>=0;--i)
     {if(a[i]%2==0)
     
     cout<<a[i]<<" ";
     }
     for(int i=0;i<n;++i)
     {if(b[i]%2==1)
     
     cout<<b[i]<<" ";
     }
     
     return 0;
      }