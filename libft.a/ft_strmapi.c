#include "libft.h"

char add_index(unsigned int i, char c)
{
    return (c + i);
}
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (!s)
    {
        return (NULL);
    }
    char *string;
    unsigned int i;
    size_t len;
    len = ft_strlen(s);
    i = 0;
    string = (char *)malloc(sizeof(char) * (len + 1));
    if (!string)
    {
        return (NULL);
    }
    while (s[i])
    {
        string[i] = f(i, s[i]);
        i++;
    }
    string[i] = '\0';
    return (string);
}
int main()
{
    char const *s = "abc";
    char *str = ft_strmapi(s, add_index);
    printf("%s\n", str);
}