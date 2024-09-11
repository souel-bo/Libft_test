#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t allocation_size;
    char *trim;
    size_t start = 0;
    size_t end = ft_strlen(s1);
    if (s1 == NULL || set == NULL)
    {
        return NULL;
    }
    while (s1[start] && ft_strchr(set, s1[start]))
    {
        start++;
    }
    while (end > start && ft_strrchr(set, s1[end - 1]))
    {
        end--;
    }
    allocation_size = end - start;
    trim = (char *)malloc(sizeof(char) * (allocation_size + 1));
    if (trim == NULL)
    {
        return NULL;
    }
    ft_strlcpy(trim, &s1[start], allocation_size + 1);
    return trim;
}
int main()
{
    const char *s1 = "oufiane";
    const char *set = "oie";
    char *str = ft_strtrim(s1, set);//ufan
    printf("trim is : %s \n", str);
}