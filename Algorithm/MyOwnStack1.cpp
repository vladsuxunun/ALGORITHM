#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE=100;

 struct my_stack {
     int m_size;            // Количество элементов в стеке
     int m_elems[MAX_SIZE]; // Массив для хранения элементов

     my_stack()
     {
         m_size = 0;
     }

     //my_stack()
     //{
         ///delete[] m_elems;
     //}

     void push(int d)
     {
         m_elems[m_size] = d;
         m_size++;
         cout << "ok" << endl;
     }

     int pop()
     {
         int last_number = 0;
         if (0 < m_size)
         {


         int last_number = m_elems[m_size - 1];
         m_size--;
     }
         return last_number;
     }

     void front()
     {

         if(m_size > 0)
         {
          cout<<m_elems[0]<<endl;
         }
               else if(m_size == 0)
         cout<<"error"<<endl;

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
            ms1.front();
        } else if (command == "size")
        {
            cout << ms1.size() << endl;
        } else if (command == "pop")
        {
            cout << ms1.pop() << endl;
        } else if (command == "clear")
        {
            ms1.clear();
        }
        else if (command == "front")
        {
            ms1.front();
        }
        else if (command == "exit")
        {
            cout << "bye" << endl;
            break;
        }

    }


    return 0;
}
