#include <iostream>
#include<queue>
#include <map>
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

Node* create_tree(int* arr,int l,int r){
    if(l>r){
        return NULL;
    }
    if(l==r){
        return new Node(arr[l]);
    }
    int m = (r+l)/2;
    // cout<<endl<<"M:"<<m<<endl;
    Node* temp =new Node(arr[m]);
    temp->left = create_tree(arr,l, m-1);
    temp->right = create_tree(arr, m+1,r);
    return temp;
}
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
    int n[8] = {1,2,3,4,5,6,7,8};
    Node* head = create_tree(n, 0,8);
    queue<Node*> q;
    map<int,queue<Node*> > m;
    q.push(head);
    m[0] = q;
    level_order(m);
    return 0;
}
