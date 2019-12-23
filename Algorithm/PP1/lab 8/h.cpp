 #include <iostream>
 #include <vector>
 #include <algorithm>

 using namespace std;


 int main (){
     vector<int>a;
     int n,x;
     cin>>n;  // 5

     for(int i=0;i<n;++i)
     {cin>>x;  // 100 3 40 143 20
     a.push_back(x);
     }
     sort(a.begin(),a.end());
      int k;
      cin>>k;
      
      for(int i=0;i<k;++i)
      {
      cout<<a[i]<<" ";
      }

        return 0;
        }