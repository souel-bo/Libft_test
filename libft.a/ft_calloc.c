#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
    size_t i = num * size;
    void *cal = (void *)malloc(i);
    if (cal == NULL)
    {
        return (NULL);
    }
    ft_memset(cal, 0, i);
    return (cal);
}