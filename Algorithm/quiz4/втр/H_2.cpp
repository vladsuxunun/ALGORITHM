#include <iostream>
using namespace std;

int used[100][100];

int main(){
    int n, m;
    cin >> n >> m;
    char ost[n][m];
    for(int i = 0; i < n; i++){
        for(int j  = 0; j < m; j++){
            cin >> ost[i][j];
        }
    }
    int c = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(ost[i][j] == '1'){
                if(used[i][j] == 0){
                    c++;
                    used[i][j] = c;
                }
                if(ost[i][j + 1] == '1')
                    used[i][j + 1] = c;
                if(ost[i + 1][j] == '1')
                    used[i + 1][j] = c;
            }
        }
    }
    cout << c;
    return 0;
}