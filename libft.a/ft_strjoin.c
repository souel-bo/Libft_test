#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    if (s1 == NULL || s2 == NULL)
    {
        return NULL;
    }
    size_t allocation_size = ft_strlen(s1) + ft_strlen(s2) + 1;
    char *all = (char*)malloc(sizeof(char) * (allocation_size));
    if (all == NULL)
    {
        return NULL;
    }
    ft_strlcpy(all, s1, allocation_size);
    ft_strlcat(all, s2, allocation_size);
    return all;
}