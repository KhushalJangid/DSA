#include <iostream>
#include<queue>
#include <map>
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

void bfs(queue<Node*> q){
    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<" ";
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right!= NULL){
            q.push(temp->right);
        }
        q.pop();
    }
}

int main(){
    Node head = Node(0);
    head.left = new Node(1);
    head.left->left = new Node(3);
    head.left->right = new Node(4);
    head.right = new Node(2);
    head.right->left = new Node(5);
    head.right->right = new Node(6);
    queue<Node*> q;
    q.push(&head);
    bfs(q);
    cout<<endl;
    return 0;
}
