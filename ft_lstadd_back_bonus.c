/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souel-bo <souel-bo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:46:49 by souel-bo          #+#    #+#             */
/*   Updated: 2024/11/08 00:27:49 by souel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*int main()
{
    t_list *head = ft_lstnew("First node");
    t_list *second = ft_lstnew("Second node");
    ft_lstadd_back(&head, second);
    t_list *third = ft_lstnew("Third node");
    ft_lstadd_back(&head, third);
    t_list *current = head;
    while (current != NULL)
    {
        printf("Node content: %s\n", (char *)current->content);
        current = current->next;
    }
    return 0;
}
*/
