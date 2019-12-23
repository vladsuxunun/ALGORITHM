 #include <iostream>
 #include <algorithm>
 #include <string>

 using namespace std;

 int space(string n,int i,int div){
     if(i==n.size())
     return 0;
    
     
     return space();
 }
 
 int main(){
     string n;
     cin>>n;

     cout<<space(n,0)<<" ";

 }