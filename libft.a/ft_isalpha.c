#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && 'Z'))
    {
        return (1);
    }
    return (0);
}