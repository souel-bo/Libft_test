/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souel-bo <souel-bo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:05:42 by souel-bo          #+#    #+#             */
/*   Updated: 2024/11/06 20:19:15 by souel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;

	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
	{
		sub_str = ft_strdup("");
		return (sub_str);
	}
	if (len > ft_strlen(s) - (size_t)start)
		len = ft_strlen(s) - (size_t)start;
	i = 0;
	sub_str = (char *)malloc
		((sizeof(char)) * (len + 1));
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + (size_t)start, len + 1);
	sub_str[len] = '\0';
	return (sub_str);
}
