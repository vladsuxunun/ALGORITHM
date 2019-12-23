 #include <iostream>
 #include <algorithm>
 using namespace std;
 int main(){
     int cnt=0,cnt1=0,cnt2=0;
     string s;
     getline(cin,s);
     for(int i=0;i<s.size();++i)
      if (s[0]=='a')
      {cnt++;}
      
      for(int i=0;i<s.size();++i)
      if (s[i-1]==' ' && s[i]=='a')
      {cnt1++;
      }
      for(int i=0;i<s.size();++i)
      if(s[i-1]==' ' && s[i]=='a' && s[i+1]==' ')
      {cnt2++;}

      cout<<cnt+cnt1+cnt2;

      return 0;
     }