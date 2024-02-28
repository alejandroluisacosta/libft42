/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:26:27 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:26:30 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{

	t_list **list = malloc(sizeof(t_list));
	*list = malloc(sizeof(void *));
	// Populate link list 
	for (int i = 0; i < 3; i++)
	{
		t_list *node = ft_lstnew((void *)(size_t)i);
		node->next = *list;
		printf("%d\n", (int)node->content);
		*list = node;
	}
	printf("--\n");
	// Pre-pend new node
	t_list *new_node = ft_lstnew((void *)5);
	ft_lstadd_front(list, new_node);
	printf("%d\n--\n", (int)new_node->content);
	// Print all elements of linked list
	t_list *ptr = *list;
	while (ptr->next)
	{
		printf("%d\n", (int)ptr->content);
		ptr = ptr->next;
	}
}*/
