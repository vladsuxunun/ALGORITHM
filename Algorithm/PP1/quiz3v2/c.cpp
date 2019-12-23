 #include <iostream>
 #include <algorithm>
 #include <string>

 using namespace std;
 string up(string s,int i){
    if(s[i]>'A' && s[i]<'Z')
    {cout<<s[i];
    exit(0);
    }

    if(i==s.size())
    {cout<<-1;
    exit(0);
    }

    return up(s,i+1);

 }  
 int main(){
     string s;
     int i=0;
     cin>>s;
     up(s,i);
 }