#include <iostream>
using namespace std;
int main()
{

    int n ;
    cin >> n;
    int arr[100];
    int r;
    int cnt = 0;
    for(int i = 0 ;i < n;i++)
    {
        cin >> arr[i];

    }
    cin >> r;

    for(int i = 0 ;i < n;i++)
    {
        if(arr[i] == r)
            cnt++;

    }
    cout << cnt;
}
