#include <iostream>
#include <string>
using namespace std;

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

    Node *insert(Node *node, int data){
        if(node == NULL){
            node = new Node(data);
            return node;
        }
        if(node->data >= data){
            node->left = insert(node->left, data);
        }else{
            node->right = insert(node->right, data);
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

    // int findPeak(Node *node, string s, int i){
    //     cout << node -> data << " " << i << " " << s.size() << endl;
    //     if(node == NULL){
    //         return 0;
    //         cout << "error" << endl;
    //     }
    //     if(i == s.size()){
    //         return node -> data;
    //         cout << "OK" << endl;
    //     }
    //     if(s[i] == 'L')
    //         findPeak(node -> left, s, i + 1);
    //     if(s[i] == 'R')
    //         findPeak(node -> right, s, i + 1);
        
    // }

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
    int n, m;
    cin >> n >> m;
    for(int i = 0;i < n; i++){
        int x;
        cin >> x;
        bst -> root = bst->insert(bst->root, x);
    }
    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        Node *temp = bst->root;
        bool check = false;
        for(int j = 0; j < s.size(); j++){
            if(temp == nullptr){
                check = true;
                break;
            }
            if(s[j] == 'L'){
                if(temp -> left == NULL){
                    check = true;
                    break;
                }
                temp = temp -> left;
            }
            if(s[j] == 'R'){
                if(temp -> right == NULL){
                    check = true;
                    break;
                }
                temp = temp -> right;
            }
        }
        if(check){
            cout << "NO" << endl;
        }else{
            if(temp->left == NULL && temp -> right == NULL)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }
    return 0;
}