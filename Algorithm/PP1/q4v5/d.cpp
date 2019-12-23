  #include <bits/stdc++.h>
 using namespace std;
 int main (){
     vector<int>x;
     vector<int>y;
     vector<int>w;
     vector<int>z;
     
     int n,ja,ga;
     cin>>n;
     int a[n][n];

     for(int i=0;i<n;++i){
     for(int j=0;j<n;++j)
     cin>>a[i][j];
     }

         for(int i=0;i<n;++i)
           {ja=a[i][i];
          x.push_back(ja);
        y.push_back(ja);
}

          for(int i=0;i<n;++i)
          {ga=a[i][n-1-i];
          w.push_back(ga);
           z.push_back(ga);
          }
         

          reverse(y.begin(),y.end());
          reverse(z.begin(),z.end());

          int cnt1=0,cnt2=0;

    for (int i=0;i<x.size();i++){
     if(x[i]==y[i])
 cnt1++;
 }

    for (int i=0;i<w.size();i++){
     if(w[i]==z[i])
 cnt2++;
 }
 if(cnt1==cnt2)
 cout <<"YES";
 else
 cout <<"NO";

 return 0;
 }