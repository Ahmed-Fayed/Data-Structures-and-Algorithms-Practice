#include "Stack.h"
#include <iostream>

void Stack::push(int data)
{
	Item* item = new Item(data);

	item->link = top;
	top = item;

	size++;
}

void Stack::pop()
{
	Item* temp = new Item();
	temp = top;
	top = top->link;
	delete temp;

	size--;
}


void Stack::print_stack()
{
	Item* ptr = new Item();
	ptr = top;

	while (ptr != NULL)
	{
		std::cout << ptr->data << " ";
		ptr = ptr->link;
	}
	std::cout << std::endl;
}


int Stack::get_size()
{
	return size;
}

bool Stack::is_empty()
{
	if (top != NULL)
		return false;

	return true;
}

int Stack::get_top()
{
	return top->data;
}

