//Алгоритм Эротосфена: выводит все прайм числа от 0 до n
#include <iostream>

using namespace std;

int p[1000100];

int main(){
int gg;
cin >> gg;
int n =100;
int arr[1000];
int cnt = 0;
int gg1 = 0;
for(int i=0; i<=n; i++){
	p[i] =0;
}

for(int i =2; i*i<=n; i++){
	if(p[i]==0){
		int k =i;
		while(k+i<=n){
			k+=i;
			p[k]=1;
		}
	}
}

for(int i =2; i<=n; i++){
	if(p[i] == 0)
		//cout << i << " ";
		arr[cnt++] = i;
}
for (int i = 0;i < cnt;i++)
{
    //cout<<arr[i]<< " ";
    if((i + 1 ) == gg)
    {
      cout << arr[i];
    }

}
	return 0;
}
