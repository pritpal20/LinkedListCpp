#include <iostream>
#include "linkedlist.h"
using namespace std;


#define MyList List* 

int main()
{
	
	MyList lst = new List();

	range1(i,10,20)
	{
		lst->push(i);
	}
	lst->print();

	lst->erase(1);

	lst->print();
	
	cout << "Lenght of list is " << lst->get_length() << endl;

	return 0;
}