//   oddlover
  #include   <iostream>

  using namespace std;

  int main(){
    
   int i;
   int n;
   
   int arr [500000];
   
   cin>>n;

   for(i=1;i<=n;i++){

 cin >> arr[i] ;}

   for(i=1;i<=n;i++)
   if(arr[i] % 2 == 1)
   {
    cout<<arr[i]<<" ";
    }
   
    return 0;

   }