/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:14:55 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/09 12:47:05 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}

/*int	main(void)
{
	t_list **lst = malloc(sizeof(t_list));
	*lst = malloc(sizeof(void *));
	*lst = NULL;

	// Populate link list
	for (int i = 1; i < 5; i++)
	{
		t_list *node = ft_lstnew((void *)(size_t)i);
		ft_lstadd_front(lst, node);
		//printf("%d\n", (int)node->content);
	}

	// Return last node
	t_list *node = ft_lstlast(*lst);
	printf("--\nlast node: %d\n", (int)node->content);
}*/
