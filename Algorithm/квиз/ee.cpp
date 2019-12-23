#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

class Queue{
    public:
    Node* head, *tail;
    Queue(){
        head = NULL;
        tail = NULL;
    }
    void push(int data){
        Node* node = new Node(data);
        if(head == NULL){
            head = node;
            tail = node;
        }else{
            tail->next = node;
            tail = node;
        }
    }
    void pop(){
        if(head == tail){
            head = NULL;
            tail = NULL;
        }else{
            head = head->next;
        }
    }
    int front(){
        return head->data;
    }
    bool empty(){
        if(head == NULL || tail == NULL)
            return true;
        return false;
    }
};

int main(){
    Queue* q = new Queue();
    int n;
    cin >> n;
    q->push(0);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        q->push(x);
    }
    int temp = q->front();
    q->pop();
    int cnt = 0;
    while (!q->empty())
    {
        if(temp < q->front())
            cnt++;
        temp = q->front();
        q->pop();
    }
    cout << cnt;
    return 0;
}
