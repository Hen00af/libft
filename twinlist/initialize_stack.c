#include "libft.h"
DNode*initialize_stack()
{
    DNode *stack_info;

    stack_info = (DNode *)malloc(sizeof(DNode));
    if (!stack_info)
        exit(1);
    stack_info->next = NULL;
    stack_info->prev = NULL;
    stack_info ->value = 0;
    return stack_info;
}