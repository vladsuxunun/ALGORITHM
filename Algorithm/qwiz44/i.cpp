#include <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
string arrs[n];
int arrcnt[n];
for(int i = 0 ;i < n;i++)
{
    arrcnt[i] = 0;
}
for(int i = 0 ;i < n;i++)
{

    cin >> arrs[i];
}
string ss;
cin >>ss;
for(int j = 0;j < n;j++){
for(int i = 0;i < ss.size();i++)
{
if(arrs[j] == ss.substr(i,i + arrs[j].size()-i))
{
  arrcnt[j] =arrcnt[j] + 1;

}


}
}
int highNum = 0;
int index = 0;
for (int i =  0; i < n ; i++)
    {
        if (arrcnt[i] > highNum)
            highNum = arrcnt[i];
            index = i;

    }
   cout<<highNum<<endl;
   int ff;
  for (int i = 0;i < n;i++)
  {
      if(arrcnt[i] == highNum){
        ff = i;
      }

  }
  cout <<arrs[ff];


return 0;
}
