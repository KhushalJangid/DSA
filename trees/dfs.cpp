#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(){
        this->data = 0;
    }
    Node(int data){
        this->data = data;
    }
};

void dfs(Node* n){
    if(n){
        cout<<n->data<<" ";
        if(n->left){
            dfs(n->left);
        }
        if(n->right){
            dfs(n->right);
        }
    }else{
        return;
    }
}

int main(){
    Node head = Node(0);
    head.left = new Node(1);
    head.left->left = new Node(3);
    head.left->right = new Node(4);
    head.right = new Node(2);
    head.right->left = new Node(6);
    head.right->right = new Node(5);
    dfs(&head);
    cout<<endl;
    return 0;
}
