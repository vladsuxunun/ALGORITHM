#include <iostream>
#include <queue>
using namespace std;
int main()
{

   queue<int> my_queue;
    int n;
    cin >> n;
    int mas[n][n];



    for(int i = 0; i < n; i++){
        for(int j  = 0; j < n; j++){
            cin >> mas[i][j];
        }
    }
    int nodes[n];
    for (int i = 0; i < 7; i++)
    {
        nodes[i] = 0;
    }

    my_queue.push(0);
    while (!my_queue.empty())
    {

        int node = my_queue.front();
        my_queue.pop();
        nodes[node] = 2; //
        for (int j = 0; j < 7; j++)
        {
            if (mas[node][j] == 1 && nodes[j] == 0)
            {
                my_queue.push(j);
                nodes[j] = 1;
            }
        }
        cout << node + 1 << endl;
    }
    cin.get();
    return 0;
}
