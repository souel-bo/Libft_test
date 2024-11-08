/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souel-bo <souel-bo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:44:13 by souel-bo          #+#    #+#             */
/*   Updated: 2024/11/08 00:50:59 by souel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main()
{	t_list *head = NULL;
	t_list *first = ft_lstnew("first one");
	t_list *second = ft_lstnew("second one");
	t_list *third = ft_lstnew("third one");

	ft_lstadd_front(&head, third);
	ft_lstadd_front(&head, second);
	ft_lstadd_front(&head, first);

	t_list *current = head;
	while (current != NULL)
	{
		printf("the content is : %s\n", (char *)current->content);
		current = current->next;
	}
	current = head;
	while (current != NULL)
	{
		t_list *fr = current;
		current = current->next;
		free(fr); 
	}
}
*/