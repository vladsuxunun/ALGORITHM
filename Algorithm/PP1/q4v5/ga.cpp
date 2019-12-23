#include <bits/stdc++.h>
 
 using namespace std;

 int main(){
     int n;
     cin>>n;
     
      map<int,int>m;
      for(int i=0;i<n;i++)
      {int a;
      cin>>a;
      m[a]=a;
      }
       sort(m.begin(),m.end());
       
       map<int,int>::iterator it;
       for(it=m.begin();it!=m.end();it++)
       cout<<(*it).second;
  

       return 0;

      }
