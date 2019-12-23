 #include <iostream>
 #include <algorithm>

 using namespace std;

 int main (){
     int radius;
     cin>>radius;

     double area=3.14159*radius*radius;

     cout<<fixed;
     cout.precision(2);
     cout<<area;

     return 0;
     }