#include <iostream>
using namespace std;

int sum[5005];
int sz = 0;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BST{
    public:
    Node *root;

    BST(){
        root = NULL;
    }

    Node *insert(Node *node, int data, int level){
        if(node == NULL){
            if(level > sz)
                sz = level;
            node = new Node(data);
            sum[level] += data;
            return node;
        }
        if(node->data >= data){
            node->left = insert(node->left, data, level + 1);
        }else{
            node->right = insert(node->right, data, level + 1);
        }
        return node;
    }
    
    void inOrder(Node *node){
        if(node == NULL)
            return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

    Node *findMin(Node *node){
        while(node->left != nullptr)
            node = node->left;
        return node;
    }

    Node *findMax(Node *node){
        while(node->right != nullptr)
            node = node->right;
        return node;
    }

    Node *deleteNode(Node *node, int data){
        if(node == NULL)
            return NULL;
        if(data < node->data)
            node->left = deleteNode(node->left, data);
        else if(data > node->data)
            node->right = deleteNode(node->right, data);
        else{
            if(node->right == NULL && node->left == NULL)
                node = NULL;
            else if(node->left == NULL)
                node = node->right;
            else if(node->right == NULL)
                node = node->left;
            else{
                Node *tmp = findMin(node->right);
                node->data = tmp->data;
                node->right = deleteNode(node->right, tmp->data);
            }
        } 
        return node;
    }
};

int main(){
    BST *bst = new BST();
    int n;
    cin >> n;
string gg;
   int x;
int cnt1 = 0;
while(cnt !=4)
{
     
cin >>ss

        cin >> x;
        bst->root = bst->insert(bst->root, x, 0);
cnt1++;
    }
    cout << sz + 1 << endl;
    for(int i = 0; i <= sz; i++){
        if(sum[i] == 0)
            break;
        cout << sum[i] << " ";
    }
    return 0;
}