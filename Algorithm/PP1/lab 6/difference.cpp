 #include <iostream>
 using namespace std;
 
 int d[101010];
 void diff(int n, int a[], int b[]) {
 for (int i = 1; i <= n; ++ i) {
 d[i] = b[i] - a[i];
 }
 }
 int main () {
 int n;
 cin >> n;
 int a[n + 1], b[n + 1];
 for (int i = 1; i <= n; ++ i) {
 cin >> a[i];
 }
 for (int i = 1; i <= n; ++ i) {
 cin >> b[i];
 }
 diff(n, a, b);
 for (int i = 1; i <= n; ++ i) {
 cout << d[i] << ' ';
 }
 return 0;
 }
