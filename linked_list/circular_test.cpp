#include <cstddef>
#include <iostream>
using namespace std;

class Node {
    public:
	int data;
	 Node* next;
	Node(){
	data = 0;
	next = NULL;
	}
	Node(int data){
	   this->data = data;
		next=NULL;
	}
};

// This function prints contents of linked list starting
// from the given node
void printCircularList(Node *n)
{
    if(n==NULL){
        return;
    }
    Node *head = n;
	while (n->next != NULL && n->next!=head) {
		cout<<n->data<<"->";
		n = n->next;
	}
	cout<<n->data<<endl;
}
int checkCircularList(Node *n)
{
    if(n==NULL){
        return 0;
    }
    Node *head = n;
	while (n->next != NULL && n->next!=head) {
		n = n->next;
	}
	if(n->next==head){
	   return 1;
	}else{
	   return 0;
	}
}

int searchList(Node *n, int key)
{
    int pos = 1;
    if(n==NULL){
        return -1;
    }
    Node *head = n;
	while (n->next != NULL && n->next!=head) {
		// cout<<n->data<<"->";
		if(n->data==key){
		  return pos;
		}
		n = n->next;
		pos++;
	}
	// cout<<n->data<<endl;
	return -1;
}

// Driver's code
int main()
{
    Node head;
    head.data = 10;
    head.next = new Node(20);
    head.next->next = new Node(30);
    head.next->next->next = new Node(40);
    head.next->next->next->next = new Node(50);
    head.next->next->next->next->next = &head;

	cout<<"Linked List:"<<endl;
	printCircularList(&head);
	int r = searchList(&head, 40);
	if(r==-1){
	   cout<<"Element not found"<<endl;
	}else{
	   cout<<"Element found at position "<<r<<endl;
	}
	int res = checkCircularList(&head);
	if(res){
	   cout<<"It is a circular list"<<endl;
	}else{
	   cout<<"It is not a circular list"<<endl;
	}
	return 0;
}
