#include <iostream>

using namespace std;

int main()
{
  string s; // abba  abba
  cin >> s;
  int n = s.size();

  int k = 0;
  for(int i = 0; i < n / 2; i++){
    if(s[i] == s[n - 1 - i]){
      k++;
    }
  }
  if(k == n / 2)
    cout << "yes";
  else 
    cout << "no";

  return 0;
}