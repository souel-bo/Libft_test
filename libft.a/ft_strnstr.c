#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j;
    if (*needle == '\0')
    {
        return (char *)haystack;
    }
    while (haystack[i] && i < len)
    {
        j = 0;
        while (i + j < len && haystack[i + j] == needle[j] && needle[j])
        {
            if (needle[j + 1] == '\0')
            {
                return ((char *)&haystack[i]);
            }
            j++;
        }
        i++;
    }
    return NULL;
}