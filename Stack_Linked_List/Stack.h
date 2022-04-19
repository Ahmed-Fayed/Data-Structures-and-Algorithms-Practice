#pragma once
#include <cstddef>


struct Item {
	int data;
	Item* link;

	Item() {
		data = NULL;
		link = NULL;
	}

	Item(int d) {
		data = d;
		link = NULL;
	}

};

class Stack
{
private:
	Item* top;
	int size;


public:

	Stack() {
		top = NULL;
		size = 0;
	}

	void push(int data);

	void pop();

	int get_size();

	void print_stack();

	bool is_empty();

	int get_top();

};

