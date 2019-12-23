#include <iostream>
#include <stack>
using namespace std;

long long num;

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        stack<int> st;
        cin >> num;
        while(num > 0){
            int temp = num % 2;
            if(st.empty()){
                st.push(temp);
            }else{
                int numTop = st.top();
                if(numTop == 0 && temp == 1)
                    st.pop();
                else 
                    st.push(temp);
            }
            num /= 2;
        }
        if(st.empty())
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}