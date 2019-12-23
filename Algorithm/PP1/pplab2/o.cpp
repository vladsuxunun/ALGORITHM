#include <iostream>
using namespace std;

int main (){
    int n;
    int maxi=-1e9;
    int a[n][n];

    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        cin>>a[i][j];
    }
    int c,d;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        {if(i==j)
        {if(a[i][j]>maxi)
        maxi=a[i][j];
        c=i;
        d=j;
        }
         }
         }
     cout<<"Maximum element is: "
     <<maxi<<" with coordinates: "
     << c <<';'<< d;
     return 0;
     }
