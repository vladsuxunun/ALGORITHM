 #include <iostream>
 #include <vector>
 #include <algorithm>

 using namespace std;

 int main (){
     vector<int>a;
     int n,x;
     cin >> n;  // 5

     for(int i=0;i<n;++i)
     {cin>> x; // 2 3 8 -3 4
     a.push_back(x);
     }
     int b,c;
     cin>>b>>c; // 1  10

    
     a.insert(a.begin()+b,c);

     for(int i=0;i<a.size();++i)
     cout<<a[i]<<" ";
        
        return 0;

 }