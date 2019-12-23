 #include <iostream>
 #include <algorithm>
 #include <vector>

 using namespace std;
 int main (){
     vector<int>s;

     int n,x,a,b;
     cin>>n;

     for(int i=0;i<n;++i)
     {cin>>x;

     s.push_back(x);
     }
     cin>>a>>b;
     reverse(s.begin()+a,s.begin()+b+1);

     for(int i=0;i<n;++i)
     cout<<s[i]<<" ";

     return 0;
 }