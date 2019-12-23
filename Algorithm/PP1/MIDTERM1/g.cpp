#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int cnt[26];
string s;
int main(){
cin>>s;
for (int i=0; i <s.size();i++){
cnt[s[i]-'a']++;
}

int maxi = 0, mini = int(1e9);

for (int i=0; i<26;i++){
    if (cnt[i]>maxi)
        maxi=cnt[i];

    if(cnt[i]<mini)
        mini = cnt[i];
}
if(maxi==1 && mini==1){
    cout<<"Yes";
}else{cout<<"No";}
return 0;
}