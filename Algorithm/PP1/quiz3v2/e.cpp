 #include <iostream>
 #include <vector>
 #include <algorithm>
 #include <map>
 #include <vector>
 #include <string>

 using namespace std;

 int main(){
     int n,k,cnt=0;
     map<string,int> a;
     string s;
     cin >> n;
     for(int i=0;i<n;++i)
     {cin>>s>>k;
     a[s]++;
     }
     map<string,int>::iterator it;
     for(it=a.begin();it!=a.end();++it)
     {if((*it).second>=2){
      cout<<(*it).first<<endl;
      cnt++;
     }
     }
     if(cnt==0)
     cout<<"NO";
     return 0;

 }