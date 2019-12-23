 #include <iostream>
 using namespace std;
 int sum(string n,int i,int ans){
     if(i==n.size())
     return ans;
     ans+=n[i]-'0';
     return sum(n,i+1,ans);
     
 }
 int main(){
 string n;
 cin>>n;

 cout<<sum(n,0,0);

 return 0;
 }