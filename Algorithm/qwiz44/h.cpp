#include <iostream>
using namespace std;
int main()
{
int num;
string n,g,m;
cin >> m>> g;
cin >> n;
int cnt = 0;
for(int i = 0;i < m.size();i++)
{
if(n == m.substr(i,i + n.size()-i) && n == g.substr(i,i + n.size()-i))
{
   cnt++;

}


}
cout<<cnt;
return 0;
}
