#include <iostream>
#include <cmath>

using namespace std;
char m(int p){
     if(p>=10)
  return  'A'+p-10;
 return p+'0';
  
}
void f(int n,int k){
    if (n==0) return;
  f(n/k,k);
  cout<<m(n%k);
 
}
int main(){
   int n,k;
    cin>>n>>k;
   f(n,k);
    return 0;
}