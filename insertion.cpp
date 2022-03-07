//insertsingle linked list 
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data, key;
	Node* next;
};

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}


void insertAfter(Node* prev_node, int new_data)
{

    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
 
    Node* new_node = new Node();
    new_node->data = new_data;
    // next of prev_node
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(Node** head_ref, int new_data) 
{ 
    Node* new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data; 
    new_node->next = NULL; 
    
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return; 
    } 
    
    while (last->next != NULL)
    {
        last = last->next; 
    }
   
    last->next = new_node; 
    return; 
} 


void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 3; 
	head->next = second; 

	second->data = 2; 
	second->next = third;

	third->data = 5; 
	third->next = NULL;

	cout << "--- Buat linked list --- " << endl;
	printList(head);
	
	cout << "\n\nInsert data" << endl ;
	push(&head, 1); 
		printList(head); cout<<endl;
	
	insertAfter(head->next, 4); 
		printList(head); cout<<endl;
	
	append(&head, 6); 
		printList(head); cout<<endl;
	
	cout << "\n-- linked list akhir : " << endl ;
	printList(head);
	
	return 0;
}
