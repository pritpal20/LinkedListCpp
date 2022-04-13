#include <iostream>
#include "linkedlist.h"
using namespace std;

int main()
{
	
	List* lst = new List(0);
	List* lst2 = new List(0);

	for(int i = 1 ; i <= 10 ;i++ )
	{
		lst->push(i);
	}
	lst->print();

	for(int i = 1 ; i <= 10 ;i++ )
	{
		lst->print();
		lst->erase(0);
	}
	lst->erase(0);
	lst->print();
	lst->erase(0);
	lst->print();
	return 0;
}