
#include <iostream>
using namespace std;
int main()
{
    int num, rg;
    cin >> num;
    int arr[num];

    for( int i = 0; i < num; i++)
      cin >> arr[i];
    cin >> rg;
  for( int i = 0; i < rg; i++){
    int a, b;
    int cnt = 0;
     int max = 0;
    cin >> a >> b;
    for( int j = a; j <= b; j++){
      if(max < arr[j]){
        max= arr[a];
        cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
