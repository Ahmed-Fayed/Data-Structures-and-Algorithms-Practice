#include "Linked_List.h"
#include <iostream>


void Linked_List::insert_begin(int data) {

	Node* new_node = new Node(data);

	new_node->next = head;
	head = new_node;

	size++;

}


void Linked_List::insert_end(int data) {

	Node* new_node = new Node(data);

	Node* temp = head;

	if (head == NULL)
		head = new_node;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new_node;
	}

	size++;

}

void Linked_List::delete_begin() {
	
	Node* ptr = new Node();

	ptr = head;
	head = head->next;
	delete ptr;

}

void Linked_List::delete_end() {

	Node* ptr = new Node();
	Node* prev = new Node();

	ptr = head;
	prev = NULL;

	while (ptr->next != NULL)
	{
		prev = ptr;
		ptr = ptr->next;
	}

	prev->next = NULL;
	delete ptr;

}


void Linked_List::print_list() {

	Node* temp = head;

	while (temp != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << std::endl;
}


