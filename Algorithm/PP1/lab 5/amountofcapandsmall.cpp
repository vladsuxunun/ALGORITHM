//AMOUNT OF CAPITAL AND SMALL

 #include <iostream>
 #include <string>

 using namespace std;
 int main(){
     string a;
     cin>>a;
     int small,capital=0;
     for(int i=0;i<a.size();++i)
     {if(a[i]>='a' && a[i]<='z')small++;
     else capital++;}

     cout<<small<<" "<<capital;

     return 0;
 }