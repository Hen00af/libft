#include "libft.h"

//ノードの初期化

t_DList	*create_dlist(void)
{
	t_DList	*list;

	list = (t_DList *)malloc(sizeof(t_DList));
	if (!list)
		return (NULL);
	list->head = NULL;
	list->tail = NULL;
	list->size = 0;
	return (list);
}
