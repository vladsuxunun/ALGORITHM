#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int uk1 = 0, uk2 = n - 1, cnt = 0;
    while(uk1 < uk2){
        if(a[uk1] + a[uk2] <= k){
            cnt++;
            uk1++;
            uk2--;
        }else{
            cnt++;
            uk2--;
        }
    }
    cout << cnt;
    return 0;
}
