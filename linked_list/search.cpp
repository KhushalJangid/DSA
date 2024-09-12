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
void printList(Node *n)
{
	while (n != NULL) {
		cout<<n->data<<"->";
		n = n->next;
	}
	cout<<endl;
}

int searchList(Node *n, int key)
{
    int pos = 1;
	while (n != NULL) {
		if(n->data==key){
		  return pos;
		}
		n = n->next;
		pos++;
	}
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

	cout<<"Linked List:"<<endl;
	printList(&head);
	int r = searchList(&head, 40);
	if(r==-1){
	   cout<<"Element not found"<<endl;
	}else{
	   cout<<"Element found at "<<r<<endl;
	}
	return 0;
}
