#include <iostream>
#include "linkedlist.h"
using namespace std;

int main()
{
	
	List* lst = new List(0);
	List* lst2 = new List(0);

	for(int i = 1 ; i <= 10 ;i++ )
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