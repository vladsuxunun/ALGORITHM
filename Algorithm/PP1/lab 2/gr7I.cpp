//great seven
 #include <iostream>
 using namespace std;

 int n;
 int cnt1=0;

 int main(){
 cin>>n;

 for(int i=0;i<n;i++){

     int s;
     cin>>s;

     if (s%10==7) 
     cnt1++;
 }
 cout<<cnt1<<endl;
 }
