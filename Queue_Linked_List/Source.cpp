#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	cout << "HI Stack!" << endl;
	cout << endl;

	Stack st;

	cout << "is empty: " << st.is_empty() << endl;

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);

	
	cout << " ==> Size of stack = " << st.get_size() << endl;

	st.pop();
	st.pop();

	cout << "is empty: " << st.is_empty() << endl;

	cout << " ==> Size of stack = " << st.get_size() << endl;

	//st.print_stack();

	
}