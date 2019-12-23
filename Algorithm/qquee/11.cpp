
#include <bits/stdc++.h>

using namespace std;
vector <int> prefix(string s) {
	int n = s.size();
	vector <int> p(n);
	p[0]=0;
	for (int i = 1; i < n; i++) {
		int k = p[i-1];
		while(k > 0 && s[i] != s[k]) {
			k = p[k-1];
		}
		if (s[i] == s[k])
			p[i] = k+1;
		else p[i]=0;
	}
	return p;
}
int main()
{

int n,n1
cin>> n >> n1
 string s1[n],s2[n1];
 int cnt[n1];
 for(int int i = 0 ; i < n;i++)
{
    cin >>s1[i];
}
 for(int int i = 0 ; i < n;i++)
{
    cin >>s2[i];
}
for(int i = 0; i < s1[i].size();i++)
{


}
  return 0 ;
}
