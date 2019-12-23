 #include <iostream>
 #include <map>
 #include <algorithm>
 #include <string>

 using namespace std;

 int main (){
     map <string,int> a;
     int n;
     cin>>n;
     for(int i=0;i<n;++i)
     {string s;
     int m;
     cin>>s>>m;
     a[s]+=m;
     }
     map<string,int>::iterator it;
     for(it=a.begin();it!=a.end();++it)
     {cout<<(*it).first<<" "<<(*it).second<<endl;
     }

     return 0;
 }