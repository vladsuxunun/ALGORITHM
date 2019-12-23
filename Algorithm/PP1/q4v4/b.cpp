 #include <bits/stdc++.h>
 using namespace std;
 int main(){
     string s;
     getline(cin,s);
     int n;
     cin>>n;

     s.erase(s.begin(),s.begin()+n);

     cout<<s;
      return 0;
     }