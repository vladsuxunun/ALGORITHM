//  positive numbers

 #include  <iostream>
 using namespace std;

 int main(){
 int n;
 cin>>n;
 int a[500000];
 int cnt=0;
 int i;
 

 for(int i=1;i<=n;i++){
 cin>>a[i];
 }
 for(i=1;i<=n;i++)
 {
 if(a[i]>0)
 cnt++;
 }
 cout<<cnt<<" ";
 return 0;
 }