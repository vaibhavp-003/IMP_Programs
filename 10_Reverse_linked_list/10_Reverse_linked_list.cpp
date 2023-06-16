#include <iostream>
using namespace std;

struct node 
{
public : 
	int data;
	struct node* next;

	node(int data)
	{
		this->data = data;
		this->next = NULL;
	}

};

void insertattail(node* &head, int data)
{
	struct node* temp = head;
	if (head == NULL)
	{
		struct node* newnode = new node(data);
		head = newnode;
		return;
	}
	else
	{
		struct node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new node(data);
	}
}

void reverse(node* &head)
{
	struct node* prev = NULL;
	struct node* current = head;
	struct node* next = NULL;

	while(current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

void display(node* &head)
{
	cout << "Linked list data : " << endl;
	struct node* temp = head;
	while (temp->next != NULL)
	{
		cout << temp->data << " -> ";           
		temp = temp->next;
	}
	cout << temp->data;
}

int main()
{
	struct node *head = NULL;
	struct node* temp = head;

	insertattail(head, 1);
	insertattail(head, 2);
	insertattail(head, 3);

	display(head);
	reverse(head);
	display(head);
}