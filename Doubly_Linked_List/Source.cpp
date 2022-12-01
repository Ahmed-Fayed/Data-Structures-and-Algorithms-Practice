#include "linked_list.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "hello linked list" << endl;

	linked_list lst;
	lst.push_front(1);
	lst.push_front(2);
	lst.push_front(3);

	lst.push_back(0);

	lst.pop_front();
	lst.pop_back();

	lst.push_back(4);
	//lst.push_back(5);

	lst.pop_back_2();

	lst.print_list();
}