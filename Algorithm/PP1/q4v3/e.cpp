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
      map<int,int>::iterator it;
      int max=-1000;
      for(it=m.begin();it!=m.end();++it)
      { if((*it).second>max)
        max=(*it).second;
       }
       cout<<max;

       return 0;

      }
