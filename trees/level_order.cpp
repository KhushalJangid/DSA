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

void level_order(map<int,queue<Node*> > m){
    int level =0;
    while(!m[level].empty()){
        Node* temp = m[level].front();
        cout<<temp->data<<" ";
        if(temp->left != NULL){
            m[level+1].push(temp->left);
        }
        if(temp->right!= NULL){
            m[level+1].push(temp->right);
        }
        m[level].pop();
        if(m[level].empty()){
            level++;
            cout<<endl;
        }
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
    map<int,queue<Node*> > m;
    q.push(&head);
    int level = 0;
    m[level] = q;
    // LEVEL ORDER Printing
    level_order(m);
    return 0;
}
