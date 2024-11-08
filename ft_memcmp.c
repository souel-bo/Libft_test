/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souel-bo <souel-bo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 03:48:31 by souel-bo          #+#    #+#             */
/*   Updated: 2024/10/28 15:15:48 by souel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*first_block;
	unsigned char	*second_block;
	size_t			i;

	first_block = (unsigned char *)s1;
	second_block = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (first_block[i] != second_block[i])
			return ((int)(first_block[i] - second_block[i]));
		i++;
	}
	return (0);
}
