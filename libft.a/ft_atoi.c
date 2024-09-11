#include "libft.h"

int ft_atoi(const char *str)
{
    int i = 0;
    int s = 1;
    int r = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            s *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + str[i] - '0';
        i++;
    }
    return (r * s);
}