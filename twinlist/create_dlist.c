#include "libft.h"

//ノードの初期化

DList *create_dlist()
{
    DList *list;

    list = (DList *)malloc(sizeof(DList));
    if(!list)
        return NULL;
    list -> head = NULL;
    list -> tail = NULL;
    list -> size = 0;
    return list;
}
