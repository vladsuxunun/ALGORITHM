#include <iostream>

using namespace std;

int main()
{
  string s = "hello";

  s += ' ';

  s.append("world");
  s.insert(3, "hi!");

  cout << s << endl;

  return 0;
}