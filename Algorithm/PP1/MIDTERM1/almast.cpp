 #include <iostream>
 #include <string>
 #include <algorithm>

 using namespace std;

 int main (){
     string s;
     cin >> s;
     string substr="87272";
     string substr1="87273";
     s.erase(s.begin()+5,s.end());
     if(substr == s)
     {cout<<"Almaty";
     }
     else if(substr1==s)
     cout<<"Almaty";
     else 
     cout << "Astana";

     return 0;
      }