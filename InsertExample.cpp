#include <iostream>
#include "linkedlist.h"
using namespace std;


#define MyList List* 

int main()
{
	
	MyList lst = new List();

	int i;
	range1(i,100,110)
	{
		lst->push(i);
	}
	lst->print();
	cout << "Lenght of list is " << lst->get_length() << endl;


	lst->insert(11,88888);
	lst->insert(12,88888);
	lst->insert(13,88888);
	lst->insert(0,88888);
	lst->insert(1,7777);
	lst->print();
	return SUCCESS;
}