#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,char>m;
      int n;
      cin>>n;
      string x;
      char z;
      int cnt=0,cnt1=0,cnt2=0;
      for(int i=0;i<n;i++)
      {
         cin>>x>>z;
         m.insert(make_pair(x,z));
      }
      map<string,char>::iterator it;
      for(it=m.begin();it!=m.end();++it)
      {if((*it).second =='A')
      cnt++;
      if((*it).second=='B')
      cnt1++;
      if((*it).second=='C')
      cnt2++;
      }

      cout<<'A'<<" "<<cnt<<endl<<'B'<<" "<<cnt1<<endl<<'C'<<" "<<cnt2;

      return 0; 
      }