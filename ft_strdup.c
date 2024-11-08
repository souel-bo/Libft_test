/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souel-bo <souel-bo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 03:46:21 by souel-bo          #+#    #+#             */
/*   Updated: 2024/11/06 19:17:55 by souel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*mal;

	i = 0;
	mal = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!mal)
		return (NULL);
	while (s1[i])
	{
		mal[i] = s1[i];
		i++;
	}
	mal[i] = '\0';
	return (mal);
}
