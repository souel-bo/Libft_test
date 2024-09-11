#include "libft.h"

char *ft_substr(char const *s, unsigned int start,
size_t len)
{
    size_t real_len, i, s_len;
    char *l = (char *)s;
    if (s == NULL)
    {
        return NULL;
    }
    s_len = ft_strlen(l);
    if (start >= s_len)
    {
        return ft_strdup("");
    }
    if (s_len - start < len)
    {
        real_len = s_len - start;
    } 
    else 
    {
        real_len = len;
    }
    char *copy;
    copy = (char*)malloc(sizeof(char) * (real_len + 1));
    if (copy == NULL)
    {
        return (NULL);
    }
    i = 0;
    while (i < real_len)
    {
        copy[i] = s[start + i];
        i++;
    }
    copy[i] = '\0';
    return copy;
}