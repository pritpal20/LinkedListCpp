#include <iostream>
#include "linkedlist.h"
using namespace std;

int main()
{
	
	List* lst = new List(0);
	List* lst2 = new List(0);

	for(int i = 1 ; i <= 1 ;i++ )
	{
		lst->append(i);
	}

	lst->print();

	for(int i = 1 ; i <= 10 ;i++ )
	{
		lst2->append(i);
	}
	lst2->print();

	Node *current = lst->get_headref();
	Node *temp = lst2->get_headref();

	if ( compare_lists(current,temp) )
	{
		cout << "\nList are equal" << endl;
	}
	else
		cout << "\nList are not equal" << endl;
	return 0;
}