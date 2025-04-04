#include "libft.h"

void	free_list(t_DList *list)
{
	t_DNode *current = list->head;
	while (current)
	{
		t_DNode *next = current->next;
		free(current);
		current = next;
	}
	free(list);
}