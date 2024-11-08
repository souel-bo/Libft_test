/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souel-bo <souel-bo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 03:48:20 by souel-bo          #+#    #+#             */
/*   Updated: 2024/11/05 14:42:56 by souel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	aloc_size;
	void	*caloc;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	aloc_size = count * size;
	caloc = malloc(aloc_size);
	if (!caloc)
		return (NULL);
	ft_memset(caloc, 0, aloc_size);
	return (caloc);
}