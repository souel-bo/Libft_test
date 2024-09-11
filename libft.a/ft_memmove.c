#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    size_t i;

    if (d < s)
    {
        i = 0;
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        i = len;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }
    return (dest);
}