/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souel-bo <souel-bo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 01:42:45 by souel-bo          #+#    #+#             */
/*   Updated: 2024/11/06 19:12:05 by souel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_lenght;
	size_t	src_lenght;
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	dest_lenght = ft_strlen(dest);
	src_lenght = ft_strlen(src);
	i = 0;
	if (dest_lenght >= size)
		return (src_lenght + size);
	while (src[i] && i < size - dest_lenght - 1)
	{
		dest[dest_lenght + i] = src[i];
		i++;
	}
	dest[i + dest_lenght] = '\0';
	return (dest_lenght + src_lenght);
}
