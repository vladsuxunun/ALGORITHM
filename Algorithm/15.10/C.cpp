#include <iostream>
using namespace std;
bool prime[500500];

int main(){
    int n;
    cin >> n;
    int k = 0;
    for(int i = 2; i < 500500; i++){
        if(prime[i] == false){
            k++;
            if(k == n){
                cout << i;
                return 0;
            }
            for(int j = i * i; j < 500500; j += i){
                prime[j] = true;
            }
        }
    }
    return 0;
}