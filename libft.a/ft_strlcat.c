#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t len_src = ft_strlen(src);
    size_t len_dest = ft_strlen(dest);
    if (dstsize <= len_dest)
    {
        return (len_src + dstsize);
    }
    size_t i = 0;
    while (src[i] && i < dstsize - len_dest -1)
    {
        dest[len_dest + i] = src[i];
        i++; 
    }
    dest[len_dest + i] = '\0';
    return (len_src + len_dest);
}