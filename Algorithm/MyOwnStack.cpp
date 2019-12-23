#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE=1000;

 struct my_stack {
     int m_size;            // Количество элементов в стеке
     int m_elems[MAX_SIZE]; // Массив для хранения элементов

     my_stack()
     {
         m_size = 0;
     }

     ~my_stack()
     {
         delete[] m_elems;
     }

     void push(int d)
     {
         m_elems[m_size] = d;
         m_size++;
         cout << "ok" << endl;
     }

     int pop()
     {
         int last_number = m_elems[m_size - 1];
         m_size--;
         return last_number;
     }

     int back()
     {
         return m_elems[m_size - 1];
     }

     int size()
     {
         return m_size;
     }

     void clear()
     {
         m_size = 0;
         cout << "ok" << endl;
     }
 };


int main()
{
    my_stack ms1;

    string command;
    int number;

    while (true)
    {
        cin >> command;

        if (command == "push")
        {
            cin >> number;
            ms1.push(number);
        } else if (command == "back")
        {
            cout << ms1.back() << endl;
        } else if (command == "size")
        {
            cout << ms1.size() << endl;
        } else if (command == "pop")
        {
            cout << ms1.pop() << endl;
        } else if (command == "clear")
        {
            ms1.clear();
        } else if (command == "exit")
        {
            cout << "bye" << endl;
            break;
        }

    }

    // ТУТ мы тестируем наш ТИПАстэк
    return 0;
}
