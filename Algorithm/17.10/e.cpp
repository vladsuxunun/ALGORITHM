#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <chrono>
#include <stack>
#include <string>
#include <bitset>
#include <unordered_map>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <cassert>
#include <tuple>
#include <iomanip>
#include <random>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <fstream>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define popb pop_back()
#define ll long long
#define sz size()
#define all(x) x.begin(), x.end()
#define forn(x) for(ll i=1;i<=x;i++)
#define sforn(x, y) for(ll i=1;i<=x;i++)for(ll j=1;j<=y;j++)
#define pii pair<ll, ll>
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

/*
    LOL KEK CHEBUREK

    PIHALITI

 */

int main(){ speed;
    ll n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll> > v;
    for(ll i=1;i<=n;i++){
        ll x;
        cin >> x;
        v.push(x);
    }
    double ans = 0;
    while(v.sz > 1){
        ll f = v.top();
        v.pop();
        ll s = v.top();
        v.pop();
        ans += (f + s) * 0.05;
        v.push(f+s);
    }
    cout << fixed << setprecision(6) << ans << endl;
    return 0;
}