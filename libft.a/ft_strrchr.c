#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
     int i = ft_strlen(str);
    
    if (c == '\0')
    {
        return (char*)&str[i];
    }
    while (i > 0)
    {
        if (str[i - 1] == (char)c)
        {
            return (char *)&str[i - 1];
        }
        i--;
    }
    if (str[0] == (char)c)
    {
        return (char*)&str[0];
    }
    return NULL;
}