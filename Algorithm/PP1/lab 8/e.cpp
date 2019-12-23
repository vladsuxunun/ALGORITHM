 #include <iostream>
 #include <vector>
 #include <algorithm>

 using namespace std;

 int main(){
     vector<int>s;
     int n,x;
     cin>>n;

     for(int i=0;i<n;++i)
     {cin>>x;
     s.push_back(x);
     }
      
      int a,b;
      cin>>a>>b;
      s.erase(s.begin()+a,s.begin()+b+1);
      for(int i=0;i<s.size();++i)
      cout<<s[i]<<" ";


      return 0;
      }