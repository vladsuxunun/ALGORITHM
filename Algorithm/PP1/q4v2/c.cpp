 #include <iostream>
 #include <algorithm>

 using namespace std;

 int main (){
     int n,z;
     cin>>n>>z;
     int a[z];

     for(int i=0;i<z;++i)
     cin>>a[i];

     sort(a,a+z);
     reverse(a,a+z);

     
     cout<<(a[0])*n;
     

     return 0;      
      }