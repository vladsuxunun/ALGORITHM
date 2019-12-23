#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> my_stack;
 int g,n;
 cin >> g>>n;
    int mas[n][3];
    for(int i = 0; i < n; i++){
        for(int j  = 0; j < 3; j++){
            cin >> mas[i][j];
        }
    }
    int nodes[3];

    for (int i = 0; i < 7; i++)
    {
      nodes[i] = 0;
    }


    my_stack.push(0);

    while (!my_stack.empty())
    {
        int node = my_stack.top();
        my_stack.pop();
        if (nodes[node] == 2) continue;

        nodes[node] = 2;

        for (int j = 6; j >= 0; j--)
        {
            if (mas[node][j] == 1 && nodes[j] != 2)
            {
                my_stack.push(j);
                nodes[j] = 1;
            }
        }
        cout << node + 1 << endl;
    }
    cin.get();
    return 0;
}
