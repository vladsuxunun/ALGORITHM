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

     int k;
     cin>>k;

     for(int i=0;i<a.size();++i){
     
      if(a[i]==k){
     cout<<"Yes";
      
     return 0;
      }
     }
     
      cout<< "No";
      

     return 0;
      }