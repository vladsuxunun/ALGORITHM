#include <iostream>

using namespace std;

int main()
{
  string s; // abba  abba
  cin >> s;
  
  int left = 0;
  int right = s.size() - 1;

  while(left < right){
    if(s[left] != s[right]){
      cout << "no";
      return 0;
    }
    left++;
    right--;
  }
  cout << "yes";
