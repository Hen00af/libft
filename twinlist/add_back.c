#include "libft.h"

void add_back(DList *list,int data)
{
    DNode *new_node;

    new_node = create_node(data);
    if(!new_node)
        return ;
    if(list->tail == NULL){
        list -> head = new_node;
        list -> tail = new_node;
    }
    else{
        new_node -> prev = list->tail;
        list -> tail -> next=new_node;
        list -> tail = new_node;
    }
    list->size++;
}