#include "libft.h"

t_DList	*initialize_stack(void)
{
	t_DList *stack_info;

	stack_info = (t_DList *)malloc(sizeof(t_DList));
	if (!stack_info)
		exit(1);
	stack_info->head = NULL;
	stack_info->tail = NULL;
	stack_info->size = 0;
	return (stack_info);
}