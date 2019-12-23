// position of maximum
 #include <iostream>
 using namespace std;
 int main(){
     int row,col,n,max=-1e9-17;
     cin>>n;
     int arr[n][n];
     for(int i=0;i<n;++i)
     for(int j=0;j<n;++j)
     cin>>arr[i][j];
     
     for(int i=0;i<n;++i)
     for(int j=0;j<n;++j)
     if(arr[i][j]>max)
        {max=arr[i][j];
        row=i;
        col=j;}

    cout<<++row<<" "<<++col;

    return 0;
 }
