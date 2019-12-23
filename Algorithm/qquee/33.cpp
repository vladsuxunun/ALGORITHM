#include <bits/stdc++.h>

using namespace std;

long long p[10010];
long long pref[10010];

void precalc() {
  p[0]=1;
  for (int i = 1; i < 10001; i++)
    p[i]=p[i-1]*31;
}

long long hashString(string s) {
  long long h = 0;
  for (int i = 0; i < s.size(); i++) {
    h+=((s[i]-'a')*p[i]);
  }
  return h;
}

void hashcalc(string s) {
  for (int i = 0; i < s.size(); i++) {
    pref[i]=((s[i]-'a')*p[i]);
    if (i)
      pref[i]+=pref[i-1];
  }
}

int main() {
  precalc();
  int n;
  cin >> n;
 int array[n];
 for(int i = 0;i < n;i++)
 {
     cin >>array[i];
 }

return 0;
  }


