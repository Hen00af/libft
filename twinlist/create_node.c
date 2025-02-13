#include "libft.h"

DNode *create_node (int data)
{
    DNode *new_node = (DNode *)malloc(sizeof(DNode));
    if(!new_node)
        return (NULL);
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = NULL;
    return(new_node);
}