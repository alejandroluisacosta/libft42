/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:29:02 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:29:05 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	if (!lst)
		return (0);
	count = 1;
	ptr = lst;
	while (ptr->next)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

/*int	main(void)
{
	t_list *lst = malloc(sizeof(t_list *));
	lst = NULL;
	t_list **ptr = malloc(sizeof(void *));
	*ptr = lst;
	for (int i = 0; i < 5; i++)
	{
		t_list *node = ft_lstnew((void *)(size_t)i);
		ft_lstadd_front(ptr, node);
		printf("%p\n%p\n", *ptr, node);
		printf("%d\n", (int)node->content);
	}
	int count = ft_lstsize(*ptr);
	printf("count: %d\n", count);
}*/
