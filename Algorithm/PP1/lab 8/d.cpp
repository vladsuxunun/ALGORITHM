 #include <iostream>
 #include <vector>
 #include <algorithm>
 using namespace std;
 int main(){
     vector<int>a;
     int n,x,k;
     cin>>n;

     for(int i=0;i<n;++i)
     {cin>>x;
     a.push_back(x);
     }
       
       cin>>k;
       for(int i=0;i<n;++i)
       {if(i==k)
       a.erase(a.begin()+k);
       }
      for(int i=0;i<a.size();++i)
     {cout<<a[i]<<" ";
     }
     return 0;
      }