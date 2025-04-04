#include "libft.h"

void	add_front(t_DList *list, int data)
{
	t_DNode *new_node;
	new_node = create_node(data);
	if (!new_node)
		return ;
	if (list->head == NULL)
	{
		list->head = new_node;
		list->tail = new_node;
	}
	else
	{
		new_node->next = list->head;
		list->head->prev = new_node;
		list->head = new_node;
	}
	list->size++;
}