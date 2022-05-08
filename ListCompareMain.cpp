#include <iostream>
#include "linkedlist.h"
#include "miscellaneous.h"
using namespace std;

int main()
{
	
	List* lst = new List(0);
	List* lst2 = new List(0);

	for(int i = 1 ; i <= 10 ;i++ )
	{
		lst->append(i);
	}

	lst->print();

	for(int i = 1 ; i <= 10 ;i++ )
	{
		lst2->append(i);
	}
	lst2->print();

	Node *list1 = lst->get_headref();
	Node *list2 = lst2->get_headref();

	if ( compare_lists(list1,list2) )
	{
		cout << "\nList are equal" << endl;
	}
	else
		cout << "\nList are not equal" << endl;
	return 0;
}