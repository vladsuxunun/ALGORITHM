//  maximum in array
 #include  <iostream>

 using namespace std;
 int main(){
 
 int n;
 cin>>n;
 int i;
 int b[500000];

 for(i=1;i<=n;++i)
 cin>>b[i];
 
 int c= -1000000000;
 for(i=1;i<=n;++i){
     if(b[i]>c)
     c= b[i];
 }

 cout<<c;
 return 0;

 }