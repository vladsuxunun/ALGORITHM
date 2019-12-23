class Node {
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data) {
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
};
    void push_back(int a)
    {

        Node *node = new Node(data);
        if(tail == NULL)
        {
            head = NULL;
            tail = NULL;
        }
        else ()
        {
            tail->next = node;
            next->prev = tail;
            tail = node;
        }
    }
        void getNode()
        {
            Node *node = head;
            while(node !=NULL)
            {
                cout << node->data <<"->";
                node = node->next;
            }
        }
    };
    int main()
    {
        LinkedList *gg = new LinkedList();
        gg->push_back(56);
        gg->push_back(52);
        gg->push_back(42);
        gg->push_back(42);
        gg->getNode();
    }
}


