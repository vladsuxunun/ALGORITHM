// position of maximum

  #include <iostream>
  using namespace std;

  int main(){
    int n;
    cin>>n;

    int arr[500000];
    int i;

    for(i=1;i<=n;++i)
    cin>> arr[i];
    int y=0;
    int z=-100000000;
    for(i=1;i<=n;++i){

          if(arr[i]>z)
          z=arr[i], y=i;

    }
    cout << y;

   return 0;

  }