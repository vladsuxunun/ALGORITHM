#include <iostream>
#include <algorithm>
using namespace std;
int mini = 1e9;
int binSearch(int a[], int n, int k){
    int l = 0;
    int r = 1e9;
    while(l < r){
        cout << l << " " << r << endl;
        int cnt = 0;
        int temp = (l + r) / 2;
        for(int i = 0; i < n; i++){
            if(a[i] % temp == 0)
                cnt += (a[i] / temp);
            else 
                cnt += (a[i] / temp) + 1;
        }
        if(cnt <= k){
            r = temp;
            mini = min(temp, mini);
        }
        else {
            l = temp + 1;
        }
    }
    return mini;
}

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    cout << binSearch(a, n, k);
    return 0;
}