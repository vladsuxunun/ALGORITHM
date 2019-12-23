 #include<bits/stdc++.h>
 using namespace std;
 string s;
 char x;
 int n;

 int main() {
 //abcdeffecba
 cin >> s;
 int cnt = 0;
 for(int i = 0;i < s.size();i ++) {
 if(s[i] == s[i+1] || i != s.size)
 {
     cnt++;
 }
 }

 if(cnt > 0) cout << "YES";
 else cout << "NO";
 return 0;
 }
