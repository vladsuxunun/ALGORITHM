//  SUBSTRING
 #include <iostream>
 #include <string>
 #include <algorithm>

 using namespace std;
 int main(){
     string s,t="375"; 
     cin >> s ;
     int cnt=0;

     for(int i = 0;i + t.size() - 1 < s.size();i ++) {
     string cur = s.substr(i,t.size());
     if(cur == t) {
      
      exit(0);
     } 
     }
     cout << "NO";
     return 0;
     }