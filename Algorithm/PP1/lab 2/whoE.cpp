// which one task

#include  <iostream>
#include  <cmath>

using namespace std;

int main (){

int a,b;

cin>>a>>b;

if(a>b){cout<<"1";}    // if the first number is greater than second
else if(a<b){cout<<"2";}    // if the second number is greater than first
else if(a==b){cout<<"0";}   // if a and b are equal

return 0;

}