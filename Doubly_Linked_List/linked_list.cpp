#include "linked_list.h"


using namespace std;

void linked_list::push_front(int data)
{
	Node* node = new Node(data);

	node->next = head;
	head = node;

	if (!tail)
		tail = head;

	size++;
}

void linked_list::push_back(int data)
{
	Node* node = new Node(data);

	if (!head)
		head = tail = node;
	else
	{
		tail->next = node;
		node->prev = tail;  // doubly linked list
		tail = node;
	}

	size++;
}

void linked_list::pop_front()
{
	if (!head)
		return;

	Node* ptr = head;
	head = head->next;

	delete ptr;
}

void linked_list::pop_back()
{
	if (!head)
		return;
	
	if (head == tail)
		head = tail = nullptr;
	else
	{
		Node* temp = head;
		while (temp->next->next != nullptr)
			temp = temp->next;
		
		temp->next = nullptr;
		tail = temp;
	}
}

// doubly linked list
void linked_list::pop_back_2()
{
	if (!head)
		return;

	if (head == tail)
		head = tail = nullptr;
	else
	{
		tail = tail->prev;
		tail->next = nullptr;
	}
}

void linked_list::print_list()
{
	Node* temp = head;

	while (temp != nullptr)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}


