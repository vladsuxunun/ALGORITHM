#include <iostream>
using namespace std;
int main()
{
int num;
string n,m;
cin >> n>> num;
cin >> m;
int cnt = 0;
for(int i = 0;i < m.size();i++)
{
if(n == m.substr(i,i + n.size()-i) )
{
    cout<<m.substr(i,i + (n.size()-i))<<endl;
   cnt++;
}

else
{
    cout<<m.substr(i,i + n.size()-i)<<"+"<<endl;
}

}
if(cnt >= num)
{
    cout <<"YES";
}
else()
    cout<<"NO";

return 0;
}

