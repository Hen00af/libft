#include "libft.h"

// リストを順方向に表示
void print_list_forward(DList *list) {
    DNode *current = list->head;
    printf("List forward: ");
    while (current) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
//リストを逆方向に表示
void print_list_behind(DList *list)
{
    DNode *current;
    int i;
    current = list -> tail;
    printf("List backward: ");
    while(current)
    {
        printf("%d ",current->data);
        current =current-> prev;
    }
    printf("\n");
}

// メモリ解放
void free_list(DList *list) {
    DNode *current = list->head;
    while (current) {
        DNode *next = current->next;
        free(current);
        current = next;
    }
    free(list);
}

int main() {
    DList *list = create_dlist();

    add_front(list, 10);
    add_front(list, 20);
    add_back(list, 30);
    add_back(list, 40);

    print_list_forward(list);
    print_list_behind(list);
    printf("\n");

    free_list(list);
    return 0;
}
