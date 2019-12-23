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
cout<<m.substr(2,2 + n.size()-1)<<endl;
cout<<m.substr(0,0 + n.size());
cout << cnt;
return 0;
}

