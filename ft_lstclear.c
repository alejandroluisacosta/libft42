/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:24:41 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/13 11:25:13 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (!(*lst)->next)
	{
		free(*lst);
		return ;
	}
	ft_lstclear((t_list **)(*lst)->next, del);
	del((void *)(*lst)->content);
	free(lst);
}

/*int	main(void)
{
	t_list **lst = malloc(sizeof(t_list *));
	*lst = malloc(sizeof(void *));
	if (!lst || !*lst)
		return (1);
	*lst = NULL;

	for (int i = 0; i < 4; i++)
	{
		t_list *node = ft_lstnew((void *)(size_t)i);
		ft_lstadd_front(lst, node);
	}

	t_list *ptr = malloc(sizeof(void *));
	ptr = *lst;
	do
	{
		printf("%d\n", (int)ptr->content);
		ptr = ptr->next;
	}
	while (ptr->next);
	printf("no more nodes\n");
	ft_lstclear(lst, del);
	printf("%d\n", (int)ptr->content);
}*/
