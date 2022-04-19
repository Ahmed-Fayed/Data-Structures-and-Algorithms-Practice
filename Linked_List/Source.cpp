#include <iostream>
#include "linked_list.h"

using namespace std;

int main() {

	cout << "HI Linked List!" << endl;

	Linked_List list;

	list.insert_begin(3);
	list.insert_begin(1);
	list.insert_end(5);
	list.insert_end(6);

	list.delete_begin();
	//list.delete_begin();
	list.delete_end();

	list.print_list();
}
