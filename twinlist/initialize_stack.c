#include "libft.h"

t_DNode	*initialize_stack(void)
{
	t_DNode *stack_info;

	stack_info = (t_DNode *)malloc(sizeof(t_DNode));
	if (!stack_info)
		exit(1);
	stack_info->next = NULL;
	stack_info->prev = NULL;
	stack_info->value = 0;
	return (stack_info);
}