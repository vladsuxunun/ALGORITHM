 #include <iostream>
 #include <algorithm>
 #include <vector>

 using namespace std;
 int main (){
     int n,maxi=-1000;
     vector<int>v;
     int a[n],sum=0;
     
     cin>>n;
     
     for(int i=1;i<=n;++i)
     cin>>a[i];
     
     for(int i=1;i<=n-1;++i)
     if(i%2==0)
     {
        sum=a[i+1]-a[i];
        v.push_back(sum);
     }
        if(v.size()==0)
        {cout<<"0";
        exit(0);}
      
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

      vector<int>::iterator it;
      for(it=v.begin();it!=v.end();++it)
      {cout<<(*it);
      exit(0);
      }


     return 0;
      } 