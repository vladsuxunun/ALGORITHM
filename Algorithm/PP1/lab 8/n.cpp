 #include <iostream>
 #include <set>
 #include <algorithm>
 using namespace std;
 int main (){
     set<int>a;
     int n,x;
     cin>>n;

     for(int i=0;i<n;++i)
     {cin>>x;
     a.insert(x);
     }

     set<int>::iterator it;
     for(it=a.begin();it!=a.end();++it)
     {if(*it%2==1)
     cout<<*it<<" ";
     }
     return 0;
     }