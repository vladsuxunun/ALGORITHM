 #include <bits/stdc++.h>
 using namespace std;
 int main (){
     double a,b,c;
     cin>>a>>b>>c;
     double p=(a+b+c)/2;
     double area=sqrt(p*(p-a)*(p-b)*(p-c));
     
     cout<<fixed;
     cout.precision(2);
     cout<<area;

     return 0;
 }