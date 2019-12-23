 #include <iostream>
 #include <algorithm>
 #include <vector>

 using namespace std;
 int main (){
     vector<string> a;
     vector<string> b;
    
     int n,m;
     cin>>n;
     string s;     
     for(int i=0;i<n;++i)
     {cin >> s;
     a.push_back(s);
     }
     
     cin >> m;
     for(int j=0;j<m;++j)
     {cin>>s;
     b.push_back(s);
     }
     for(int j=0;j<m;j++){
         for(int i=0;i<n;++i){
      if(b[j]== a[i])
     { cout<<b[j]<<endl;
     }
     }
     }

     return 0;
      } 