// super square 
#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int N;
  cin>>N;
  for(int i=1;pow(i,2)<=N;i++)
  cout<< pow(i,2)<<endl;
  return 0;
}