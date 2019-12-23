#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> my_stack;
    // ������� ���������
    int mas[7][7] = { { 0, 1, 1, 0, 0, 0, 1 },
                      { 1, 0, 1, 1, 0, 0, 0 },
                      { 1, 1, 0, 0, 0, 0, 0 },
                      { 0, 1, 0, 0, 1, 0, 0 },
                      { 0, 0, 0, 1, 0, 1, 0 },
                      { 0, 0, 0, 0, 1, 0, 1 },
                      { 1, 0, 0, 0, 0, 1, 0 } };
    int nodes[7]; // ������� �����
    // ������� ��� ������� ����� 0
    for (int i = 0; i < 7; i++)
    {
      nodes[i] = 0;
    }

    // �������� � ������� ������ �������
    my_stack.push(0);

    while (!my_stack.empty()) // ���� ���� �� ����
    {
        int node = my_stack.top(); // ��������� �������

        my_stack.pop();
        if (nodes[node] == 2) continue;

        nodes[node] = 2; // �������� �� ��� ����������

        for (int j = 6; j >= 0; j--) // ��������� ��� ��� ��� ������� �������
        {
            if (mas[node][j] == 1 && nodes[j] != 2) // ���� ������� ������� � �� ����������
            {
                my_stack.push(j); // ��������� �� � c���
                nodes[j] = 1; // �������� ������� ��� ������������
            }
        }
        cout << node + 1 << endl; // ������� ����� �������
    }
    cin.get();
    return 0;
}
