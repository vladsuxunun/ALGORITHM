#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
//for(int i = 0;i < n;i++)

bool pointer;
    int i,j;
    int cnt = 0;
    for (i=2; i<n; i++) {
        pointer=true;
        for (j=2; j<i; j++) if (!(i%j)) {
            pointer=false; break; };
        if (pointer==true && n % j == 0)

            cnt++;
        }
        cout<<cnt;


    return 0;

}
