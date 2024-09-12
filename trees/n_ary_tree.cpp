#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back
typedef vector<int> vi;

class Node {
    public:
        int data;   
        vector<Node*> children;

        Node(int data) {
            this->data = data;
        }
};

class Tree {
    public: 

        void insertNode(Node* root);
};

void Tree::insertNode(Node* root) {
    Node* newNode = new Node(1);
    Node* one = new Node(2);
    Node* two = new Node(3);
    Node* three = new Node(4);
    Node* four = new Node(5);

    newNode->children.push_back(one);
    newNode->children.push_back(two);
    newNode->children.push_back(three);
    newNode->children.push_back(four);

    root = newNode;
}

void printTree(Node* root) {
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        int size = q.size();
        for(int i=0; i<size; i++) {
            Node* temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if(temp->children.size() != 0) {
                for(int j=0; j<temp->children.size(); j++) {
                    q.push(temp->children[j]);
                }
            }
        }cout << endl;
    }
}

Node* makeTree(Node* root, vector<int> &nodes, int reached) {
    if(reached >= nodes.size()) return root;

    Node* newNode = new Node(nodes[reached++]);
    if(root == NULL) {
        root = newNode;
    }
    int size1 = nodes[reached++];

    forn(i, size1) {
        Node* temp = new Node(nodes[reached++]);
        root->children.push_back(temp);
    }    
    // cout << root->children.size() << endl;
    return makeTree(root->children[0], nodes, reached);
    // makeTree(root, nodes, reached+1);
}

Node* buildTree(Node* root, vi &nodes, int reached) {
    root = new Node(nodes[reached++]);
    queue<Node*> q;
    q.push(root);
    while(!q.empty() && reached < nodes.size()) {
        Node* temp = q.front();
        q.pop();
        int size = nodes[reached++];
        for(int i=0; i<size; i++) {
            Node* temp1 = new Node(nodes[reached++]);
            temp->children.push_back(temp1);
            q.push(temp1);
        }
    }
    return root;
}


int main() {
    Node* root = NULL;
    // vector<int> nodes = {0, 3, 1, 2, 3, 2, 4, 5, 1, 6, 4, 7, 8, 9, 10};
    vi nodes = {1, 2, 2, 3, 3, 4, 5, 6, 3, 7, 8, 9, 0, 1, 10};
    // vi nodes = {1, 2, 2, 3, 3, 4, 5, 6};
    Tree t; 
    int reached = 0;
    root = buildTree(root, nodes, 0);
    // cout << root->data << endl;
    printTree(root);
    cout << endl;
    return 0;
}


/* Inputs from users on codeforces
root se start kro uski value daalo
phir no of child in root
0 3 1 2 3 2 4 5 1 6 4 7 8 9 10

            0
          / | \
         1  2  3
        / \ | / \ \ \
        4 5 6 7 8 9 10
*/