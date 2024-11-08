/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souel-bo <souel-bo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:46:01 by souel-bo          #+#    #+#             */
/*   Updated: 2024/11/02 17:43:13 by souel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(long long n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		counter = 1;
	if (n < 0)
	{
		counter = 1;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int			size_allocation;
	char		*alloc;
	int			i;
	long long	j;

	j = (long long)n;
	size_allocation = lenght(j);
	alloc = (char *)malloc((sizeof(char) * (size_allocation + 1)));
	if (!alloc)
		return (NULL);
	if (j < 0)
	{
		alloc[0] = '-';
		j = -j;
	}
	if (j == 0)
		alloc[0] = '0';
	i = size_allocation - 1;
	while (j != 0)
	{
		alloc[i--] = j % 10 + '0';
		j /= 10;
	}
	alloc[size_allocation] = '\0';
	return (alloc);
}
