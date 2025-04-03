#include "libft.h"

void ft_swap(void *a, void *b, size_t size) {
    unsigned char tmp[size];
    ft_memcpy(tmp, a, size);
    ft_memcpy(a, b, size);
    ft_memcpy(b, tmp, size);
}