 #include <iostream>
 #include <set>
 #include <algorithm>
 using namespace std;
 int main (){
     set<int>a;
     int n,x,sum=0;
     cin>>n;

     for(int i=0;i<n;++i)
     {cin>>x;
     a.insert(x);
     } 

    
     set<int>:: iterator it;
     for(it= a.begin();it!=a.end();++it)
     sum+=*it;

     cout<<sum;

     return 0;
     }