#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    vector<Node*> nodes;
    Node(){
        this->data = 0;
    }
    Node(int data){
        this->data = data;
    }
    Node(int data,Node *node){
        this->data=data;
        this->nodes.push_back(node);
    }
};

int main(){
    // Node head;
    // Node *child = new Node(10);
    // Node *child2 = new Node(20);
    // Node *child3 = new Node(30);
    // head.nodes.push_back(child);
    // head.nodes.push_back(child2);
    // head.nodes.push_back(child3);
    // // cout<<head.nodes.front()->data<<endl;
    // for(auto n:head.nodes){
    //     cout<<n->data<<endl;
    //
    vector<int> v = {0,3,1,2,3,2,4,5,1,6,4,7,8,9,10};
    vector<int> child_counts;
    child_counts.push_back(1);
    vector<int> children;
    int a =1,i=0;
    Node* prev=NULL,head;
    while(i<v.size()){
        if(a==0){
            a=v[i];
            child_counts.push_back(a);
            i++;
        }else{
            int lim = i+a;
            // cout<<"->"<<lim;
            for(int j=i;j<lim;j++){
                children.push_back(v[j]);
                // if(prev==NULL){
                //     prev=new Node(v[j]);
                //     head = *prev;
                // }else{
                //     cout<<v[j]<<" ";
                //     Node* temp = new Node(v[j]);
                //     prev->nodes.push_back(temp);
                // }
                a-=1;
            }
            // cout<<endl;
            i=lim;
        }
    }
    for(int i:child_counts){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i:children){
        cout<<i<<" ";
    }
    return 0;
}
