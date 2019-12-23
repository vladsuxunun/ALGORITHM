#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int n, m, x, y;
int cnt = 0;
vector<int> g[100];
queue<int> q;
int d[100];
int used[100];

void bfs(int x, int k) {
    q.push(x);
    d[x] = 0;
    used[x] = 1;
    while (!q.empty()) {
        x = q.front();
        for (int i = 0; i < g[x].size(); i++) {
            y = g[x][i];
            if (used[y] == 0) {
                used[y] = 1;
                d[y] = d[x] + 1;
                if(d[y] == k) cnt++;
                q.push(y);
            }
            // cout << g[x][i] << " " << x << " " << d[y] << " " << " P" << endl;
        }
        q.pop();
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int t;
        cin >> x >> t;
        x--;
        cnt = 0;
        memset(d, 0, sizeof(d));
        memset(used, 0, sizeof(used));
        bfs(x, t);
        cout << cnt << endl;
    }
    return 0;
}