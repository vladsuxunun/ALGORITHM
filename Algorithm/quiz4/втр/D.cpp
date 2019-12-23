#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int maxi = -1e9;
    for(int i = 0; i < n; i++){
        if(a[i] > maxi)
            maxi = a[i];
    }
    int cnt = 0, tempcnt = 0;
    bool check = false;
    for(int  i = 0; i < n; i++){
        if(a[i] == maxi){
            tempcnt++;
        }else{
            cnt = max(cnt, tempcnt);
            tempcnt = 0;
        }
    }
    cout << cnt;
    return 0;
}