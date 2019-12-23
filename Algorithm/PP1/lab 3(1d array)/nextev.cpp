// next even

 #include <iostream>
 using namespace std;

 int main(){

     int a;
     cin>>a;
     int sum=0;
    if(a%2==0)
    {sum = a + 2;
    cout<<sum;}
    else if(a%2!=0)
    {sum = a + 1;
    cout<<sum;}

    return 0;

 }