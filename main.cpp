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
	bool reversed = false;
	cout << "Reverse list " << endl;
	lst->print(reversed);
	cout << "Lenght of list is " << lst->get_length() << endl;

	lst->reverse();

	lst->print(reversed);


	return SUCCESS;
}