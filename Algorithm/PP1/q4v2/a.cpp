 #include <iostream>
 #include <algorithm>

 using namespace std;
 int main (){
     string s;
     cin>>s;
     int cnt=0;

     for(int i=0;i<s.size();++i)
     {if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='b' && s[i+3]=='a')
     cnt++;
     }

     cout<<cnt;

     return 0;
 }