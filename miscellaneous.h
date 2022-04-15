#ifndef MISCELLANEUOS
#define MISCELLANEUOS

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