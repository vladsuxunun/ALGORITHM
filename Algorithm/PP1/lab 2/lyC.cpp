// leap year

#include   <iostream>
#include   <cmath>

using namespace std;

int main(){

int n;

cin>>n;

if (n % 4==0 || n % 400==0){cout<<"YES";}

else if(n % 100==0){cout<<"NO";}

else{cout<<"NO";}

return 0;

}