#pragma once
#include <cstddef>

struct Node {

	int data;
	Node* next;

	Node() {
		data = NULL;
		next = NULL;
	}

	Node(int d) {

		data = d;
		next = NULL;
	}

};

class Linked_List
{

private:
	
	Node* head;
	int size;



public:

	Linked_List() {
		head = NULL;
		size = 0;
	}

	void insert_begin(int data);
	
	void insert_end(int data);
	
	void delete_begin();

	void delete_end();
	
	void print_list();

};

