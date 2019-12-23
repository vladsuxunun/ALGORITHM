// triangle 
#include <iostream>
using namespace std;
int main (){
    int tr;
    cin>>tr;
    
    for(int i=1;i<=tr;++i){
        for(int j=1;j<=i;++j)
        cout<<"[*]";
        cout<<"\n";
    }
    return 0;
}