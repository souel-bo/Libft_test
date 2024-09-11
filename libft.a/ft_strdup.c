#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t len = ft_strlen(s) + 1;

    if (s == NULL)
    {
        return (NULL);
    }
    char *alloc = (char *)malloc(sizeof(char) * len);
    if (alloc == NULL)
    {
        return (NULL);
    }
    ft_strlcpy(alloc, s, len);
    return (alloc);
}