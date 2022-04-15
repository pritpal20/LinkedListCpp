#include <iostream>
#include "linkedlist.h"
#include "mydef.h"
using namespace std;

int main()
{
	
	List* lst = new List(0);
	List* lst2 = new List(0);

	int i;
	range1(i,1,10)
	{
		lst->append(i);
		lst->push(i);
	}

	lst->print();

	unsigned int ilen = lst->length();
	cout << ilen << endl;

	while(ilen > 0 )
	{
		lst->print();
		cout<< "popping  <" << lst->pop() << ">" <<  endl;
		ilen--;
	}

	lst->print();

	return 0;
}