 #include <iostream>
 #include <set>
 #include <algorithm>
 #include <string>


 using namespace std;
 int main (){
     set<string> a;

     string s;
     
     while(cin>>s)
     { string t=s;
      reverse(t.begin(),t.end());
      if(t!=s)
       a.insert(s); 
      }

      set<string>::iterator it;
      for(it=a.begin();it!=a.end();++it)
      cout<<*it<<endl;

      return 0;
 }