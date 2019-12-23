#include <iostream>
#include <string>
using namespace std;
int a[150][150];
int color[150][150];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < m ; j++)
            a[i][j] = s[j] - 48;
    }
    int c = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1){
                if(color[i][j] == 0){
                    color[i][j] = c;
                    c++;
                }
                if(a[i + 1][j] == 1){
                    color[i + 1][j] = c;
                }
                if(a[i][j + 1] == 1)
                    color[i][j + 1] = c;
            }
        }
    }
    cout << c - 1;
    return 0;
}