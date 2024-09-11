#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *destination = (unsigned char *)dest;
    unsigned char *source = (unsigned char*)src;
    size_t i = 0;
    while (source[i] && i < n)
    {
        destination[i] = source[i];
        i++;
    }
    return dest;
}