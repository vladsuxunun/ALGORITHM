 #include <iostream>
 #include <algorithm>
 #include <vector>

 using namespace std;
 int main(){
     vector<int>a;
     int n,x,maxi=-1e9,mini=1e9;
     cin>>n;

     for(int i=0;i<n;++i)
     {cin>>x;
     a.push_back(x);
     }

     for(int i=0;i<n;++i)
     {if(a[i]>=maxi)
     maxi=a[i];
     if(a[i]<=mini)
     mini=a[i];
     }
    cout<<maxi-mini;

    return 0;

 } 