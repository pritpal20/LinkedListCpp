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

	public :
	List(int arg)
	{
		head_ref = new Node(arg);
		end = NULL;
	}

	List()
	{
		head_ref = NULL;
		end = NULL;
	}

	void append(int arg)
	{
		Node* curr = head_ref;

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

		int len = this->length();

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
	}
};

//Compares two list and return true if equal and false otherwise
bool compare_lists(Node* head1, Node* head2) 
{
    Node* first_list = head1;
    Node* second_list = head2;

    while(first_list->next != NULL and second_list->next != NULL)
    {
        if(first_list->data == second_list->data)
        {
           first_list = first_list->next; 
           second_list = second_list->next; 
        }
        else
        {
        return false;
        }
    }
    if(first_list->next == NULL and second_list->next == NULL)
    {
        if(first_list->data == second_list->data)
        {
            return true;
        }
    }
    return false;
}

#endif