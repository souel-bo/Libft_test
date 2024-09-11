#include "libft.h"

int count_words(char const *s, char c)
{
    int i, j;
    i = 0;
    while (s[i] == c)
    {
        i++;
    }
    j = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            j += 1;
        }
        i++;
    }
    if (s[i] == '\0' && s[i - 1] != c)
    {
        j += 1;
    }
    return j;
}
char *ft_splitcopy(char const *s, int start, int finish)
{
    int i = 0;
    int size = finish - start;
    char *klma = (char *)malloc(sizeof(char) * (size + 1));
    if (!klma)
    {
        return (NULL);
    }
    while (start < finish)
    {
        klma[i++] = s[start++];
    }
    klma[i] = '\0';
    return klma;
}
char **ft_split(char const *s, char c)
{
    if (!s)
    {
        return NULL;
    }
    char **split;
    int words = count_words(s, c);
    size_t i;
    size_t j;
    int index;
    split = (char **)malloc(sizeof(char *) * (words + 1));
    if (!split)
        return(NULL);
    i = 0;
    j = 0;
    index = -1;
    while(i <= ft_strlen(s))
    {
        if (s[i] != c && index < 0)
        {
            index = i;
        }
        else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
        {
            split[j++] = ft_splitcopy(s, index, i);
            index = -1;
        }
        i++;
    }
    split[j] = 0;
    return split;
}