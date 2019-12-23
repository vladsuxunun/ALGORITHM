#include <iostream>

using namespace std;

class Node {
    public:
    string data;
    Node *next;
    Node *prev;

    Node(string data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

class LinkedList {
    public:
    Node *head;
    Node *tail;

    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void push_back(string data) {
        Node *node = new Node(data);
        if (tail == NULL) {
            tail = node;
            head = node;
        } else {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
    }

    void push_front(string data) {
        Node *node = new Node(data);
        if (head == NULL) {
            head = node;
            tail = node;
        } else {
            head->prev = node;
            node->next = head;
            head = node;
        }
    }

    void pop_back() {
        if (head == tail) {
            head = NULL;
            tail = NULL;
        } else {
            tail = tail->prev;
            tail->next = NULL;
        }
    }

    void pop_front() {
        if (head == tail) {
            head = NULL;
            tail = NULL;
        } else {
            head = head->next;
            head->prev = NULL;
        }
    }

    void delete_element(Node *node) {
        if (node == tail)
            pop_back();
        else if (node == head)
            pop_front();
        else {
            node->prev->next = node->next;
            node->next->prev = node->prev;
        }
    }

    void add_element(Node *node_a, Node *node_b) {
        if (node_a == tail)
            push_back(node_b->data);
        else {
            Node *node_c = node_a->next;
            node_b->prev = node_a;
            node_b->next = node_a->next;
            node_c->prev = node_b;
            node_a->next = node_b;
        }
    }

    Node *get_node(string data) {
        Node *node = head;
        while (node != NULL && node->data != data)
            node = node->next;
        return node;
    }

    void print() {
        Node *node = head;
        while (node != NULL) {
            cout << node->data << "-->";
            node = node->next;
        }

    }
    void printfront()
    {
       Node *node = head;

             cout << node->data ;

    }
    void printback()
    {
       Node *node = tail;


             cout <<node->data ;

    }
};

int main() {
    LinkedList *ll = new LinkedList();
      //ll->push_back(3);
    //ll->push_back(4);
    string a;
    string g;
    //ll->push_front(45);
    //ll->push_front(67);
    //ll->push_back(100);
    while(true)
    {
        cin>> a;
        if(a =="add_front")
        {
            cin >> g;
            ll->push_front(g);
            cout <<"ok"<<endl;
        }
        else if(a =="exit")
            {
                break;
            }
            if(a =="add_back")
        {
            cin >> g;
            ll->push_back(g);
            cout <<"ok"<<endl;
        }
        if(a =="front")
        {

            ll->printfront();

        }
        if(a =="back")
        {

            ll->printback();

        }
         if(a =="erace_front")
        {

            ll->pop_front();
            }

            if(a =="erace_back")
        {

            ll->pop_back();
            }


    }
    // 67 -> 45 -> 3 -> 4 -> 100
    //ll->print();
    //cout << endl;
    //Node *node = ll->get_node(3);
    //ll->delete_element(node);
    //ll->print();
    //cout << endl;
    //node = ll->head;
    //int n = 2;
    //for (int i = 0; i < n - 1; i++)
        //node = node->next;
    //ll->delete_element(node);
    //ll->print();

    // LinkedList *st = new LinkedList();
    // st->push_front(5);
    // top equal to st->head
    // st->pop_front();
    return 0;
}
