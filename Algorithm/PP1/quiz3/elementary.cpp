 #include <iostream>
 #include <string>
 #include <algorithm>

 using namespace std;

 int main (){
     string s;
     cin >> s;
     string t=s;
     int cnt=0;


     reverse(s.begin(),s.end());

     for(int i=0;i<s.size();++i)
     {if(s[i]>='1' && s[i]<='9')
     cnt++;}

     for(int i=0;i<s.size();++i){
         if(s.size()<=10 && s!=t && cnt>=3)
         {cout<<"YES";
         exit(0);
         }
         else 
         {cout<<"NO";
         exit(0);
         }
         }

         return 0;

         }