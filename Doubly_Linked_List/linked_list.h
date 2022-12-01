#pragma once
#include <iostream>

struct Node {

	int data;
	Node* next;
	Node* prev;  // doubly linked list

	Node(int d) {
		data = d;
		next = nullptr;
		prev = nullptr;  // doubly linked list
	}

};

class linked_list
{
private:
	Node* head;
	Node* tail;
	int size;

public:

	linked_list()
	{
		head = nullptr;
		tail = nullptr;
		size = 0;
	}


	void push_front(int data);
	void push_back(int data);

	void pop_front();
	void pop_back();
	void pop_back_2();

	void print_list();

};

