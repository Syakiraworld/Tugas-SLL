//searching single linked list 
#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int key;
	Node* next;
};

void push(Node** head_ref, int new_key)
{
	Node* new_node = new Node();
	new_node->key = new_key;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

bool search(Node* head, int x)
{
	Node* current = head; 
	while (current != NULL)
	{
		if (current->key == x)
			return true;
		current = current->next;
	}
	return false;
}

int main()
{

	Node* head = NULL;
	int x = 28;

	push(&head, 6);
	push(&head, 9);
	push(&head, 15);
	push(&head, 21);
	push(&head, 21);

	cout << "Apakah 28 ada di linked list? " << endl;
	search(head, 28)? cout<<"Ya" : cout<<"Tidak";
	
	return 0;
}
