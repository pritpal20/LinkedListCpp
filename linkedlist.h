#ifndef  LINKEDLIST
#define  LINKEDLIST

#include "mydef.h"
using namespace std;

struct Node
{
	int data;
	Node* next;

	Node(int arg)
	{
		data = arg;
		next = NULL;
	}

};

class List
{
	// int data;
	Node* head_ref;
	Node* end;
	int len;

	public :
	List(int arg)
	{
		head_ref = new Node(arg);
		end = NULL;
		len =1;
	}

	List()
	{
		head_ref = NULL;
		end = NULL;
		len = 0;
	}

	void append(int arg)
	{
		Node* curr = head_ref;
		len++;
		if(head_ref == NULL)
		{
			head_ref = new Node(arg);
			head_ref->next = NULL;
			return;
		}

		while(curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new Node(arg);
	}

	void push(int arg)
	{
		Node* curr = head_ref;
		len++;

		Node* temp = new Node(arg);
		temp->next = head_ref;
		head_ref = temp;
	}

	void print()
	{
		Node* current = head_ref;

		if(current == NULL)
		{
			printf("[]\n");
			return;
		}

		printf("[");
		while(current->next != NULL)
		{
			printf("%d,",current->data);
			current = current->next;
		}
		printf("%d]\n",current->data);
	}

	int length()
	{
		if(head_ref == NULL)
			return 0;
		Node* current = head_ref;
		int count = 1 ;
		while(current->next != NULL)
		{
			current = current->next;
			count++;
		}

		return count;
	}

	int get_length()
	{
		return len;
	}

	int pop()
	{
		if(head_ref == NULL)
			return 0;

		Node* temp = head_ref;
		if(temp->next == NULL)
		{
			head_ref = NULL;
		}
		head_ref = temp->next;

		int itemp = temp->data;
		delete temp;
		return itemp;
	}

	//returns head_ref of the list
	Node* get_headref()
	{
		return this->head_ref;
	}

	/*
	[1,2,3,4]
	erase(1) i.e element 2 from list
	count = 1
	index = 1
	1.next = 3
	*/
	void erase(int index)
	{
		if(head_ref == NULL)
			return;

		int len = this->get_length();

		if(index > len)
		{
			cout << "ERROR !! out of index " << endl;
			return;
		}

		Node* current = head_ref;
		Node* previous = NULL;
		if(index == 0 )
		{
			head_ref = head_ref->next;
			delete current;
			this->len--;
			return;
		}
		int count = 0;
		while(current->next != NULL)
		{
			count++;
			previous = current;
			current = current->next ;
			if(count == index)
				break;
		}
		previous->next = current->next;
		delete current;
		this->len--;
	}

	// to insert data at the index;
	int insert(int,int);

	void clear();
};

//O(n)	
int List::insert(int index,int data)
{
	if(index > this->len)
	{
		cout << "ERROR !! out of index " << endl;
		return FAIL;
	}
	Node* temp = new Node(data);
	if(head_ref == NULL)
	{
		head_ref = temp;
		head_ref->next = NULL;
		return SUCCESS;
	}
	int count = 0;
	Node* previous = NULL;
	Node* current = head_ref;
	while(current != NULL)
	{
		if(index == count)
			break;
		previous = current;
		current = current->next;
		count++;
	}
	if(previous == NULL)
	{
		temp->next = current;
		head_ref = temp;
	}
	else
	{
		previous->next = temp;
		temp->next = current;
	}
	len++;

	return SUCCESS;
}

void List::clear()
{
	while(this->len > 0 )
	{
		this->erase(0);
	}

	return;
}


#endif