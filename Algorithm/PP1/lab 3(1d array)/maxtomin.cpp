//  maxtomin

 #include <iostream>
 using namespace std;

 int main(){
    
   int n;
   cin>>n;
   int max=0,min=1000000000;
   int a[500500];
   for(int i=1;i<=n;++i)
   {cin>>a[i];}

   for(int i=1;i<=n;++i)
   {if(a[i]>max)
     max= a[i];
     if(a[i]<min)
     min= a[i];} 

     for(int i=1;i<=n;++i)
      {if(a[i]==max)
          a[i]=min;}
     for (int i=1;i<=n;++i)
    cout<<a[i]<<" ";

    return 0;

 }
   