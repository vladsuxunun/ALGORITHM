 #include <iostream>
 #include <algorithm>
 #include <vector>
 

 using namespace std;
 int main(){
     vector<int>a;
     int n;

     for(;;)
     {cin>>n;
      a.push_back(n);
      if(n==0)
      break;
     }
      
      a.pop_back();  // delete the last element
     sort(a.begin(),a.end());
      
     for(int i=0;i<a.size();++i)
     cout<<a[i]<<" ";


     return 0;
        
 }