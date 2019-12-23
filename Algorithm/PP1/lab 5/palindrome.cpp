// PALINDROME
 #include <iostream>
 #include <string>
 #include <algorithm>
 using namespace std;
 int main(){
     string s;
     cin>>s;
     string t=s;
     reverse(s.begin(),s.end());
     if(s==t)
     cout<<"YES";
     else cout<<"NO";

     return 0;
      
 } 