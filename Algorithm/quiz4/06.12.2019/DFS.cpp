#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> my_stack;
    // матрица смежности
    int mas[7][7] = { { 0, 1, 1, 0, 0, 0, 1 },
                      { 1, 0, 1, 1, 0, 0, 0 },
                      { 1, 1, 0, 0, 0, 0, 0 },
                      { 0, 1, 0, 0, 1, 0, 0 },
                      { 0, 0, 0, 1, 0, 1, 0 },
                      { 0, 0, 0, 0, 1, 0, 1 },
                      { 1, 0, 0, 0, 0, 1, 0 } };
    int nodes[7]; // вершины графа
    // исходно все вершины равны 0
    for (int i = 0; i < 7; i++)
    {
      nodes[i] = 0;
    }

    // помещаем в очередь первую вершину
    my_stack.push(0);

    while (!my_stack.empty()) // пока стек не пуст
    {
        int node = my_stack.top(); // извлекаем вершину

        my_stack.pop();
        if (nodes[node] == 2) continue;

        nodes[node] = 2; // отмечаем ее как посещенную

        for (int j = 6; j >= 0; j--) // проверяем для нее все смежные вершины
        {
            if (mas[node][j] == 1 && nodes[j] != 2) // если вершина смежная и не обнаружена
            {
                my_stack.push(j); // добавляем ее в cтек
                nodes[j] = 1; // отмечаем вершину как обнаруженную
            }
        }
        cout << node + 1 << endl; // выводим номер вершины
    }
    cin.get();
    return 0;
}
