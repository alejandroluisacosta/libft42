/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:26:11 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:26:13 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!new)
		return ;
	if (!lst || !*lst)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
}

/*int	main(void)
{
	t_list **lst = malloc(sizeof(t_list **));
	*lst = malloc(sizeof(void *));
	*lst = NULL;

	for (int i = 0; i < 4; i++)
	{
		t_list *node = ft_lstnew((void *)(size_t)i);
		ft_lstadd_front(lst, node);
	}

	t_list	*node = ft_lstnew((void *)(size_t)5);
	ft_lstadd_back(lst, node);
	t_list *ptr;
	ptr = *lst;
	while (ptr->next)
	{
		printf("%d\n", (int)ptr->content);
		ptr = ptr->next;
	}
	printf("%d\n", (int)ptr->content);
}*/
