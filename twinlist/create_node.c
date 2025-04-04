#include "libft.h"

t_DNode	*create_node(int data)
{
	t_DNode	*new_node;

	new_node = (t_DNode *)malloc(sizeof(t_DNode));
	if (!new_node)
		return (NULL);
	new_node->value = data;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}
