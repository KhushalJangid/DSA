#include<iostream>
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

int maxDepth(Node* node)
{
    if (node == NULL){
        return 0;
    }
    else {
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
        if (lDepth > rDepth){
            return (lDepth + 1);
        }else{
            return (rDepth + 1);
        }
    }
}

int main(){
    Node head = Node(0);
    head.left = new Node(1);
    head.left->left = new Node(3);
    head.left->right = new Node(4);
    head.left->right->left = new Node(7);
    head.right = new Node(2);
    head.right->left = new Node(5);
    head.right->right = new Node(6);
    head.right->right->left = new Node(8);
    int l = maxDepth(head.left);
    int r = maxDepth(head.right);
    cout<<"Diameter of tree : "<<l+r+1<<endl;
    return 0;
}
