#include "libft.h"

size_t ft_strlen(const char *s)
{
    const char *p = s;
    while (*p)
    {
        p++;
    }
    return (p - s);
}