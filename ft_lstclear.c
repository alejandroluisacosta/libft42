/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:24:41 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/12 13:28:33 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	del(void *ptr)
{
	t_list	*ptr1 = malloc(sizeof(void *));
	t_list	*ptr2 = malloc(sizeof(void *));	
	if (!ptr1 || !ptr2)
		return ;

	ptr1 = *ptr;
	ptr2 = ptr1;
	free(ptr);
	while (ptr1->next)
	{
		ptr1 = ptr1->next;
		
		ptr2 = ptr1;
	}
	ft_lstdelone(ptr1, del);
	free(ptr1);
	free(ptr2);
}*/

static void	del(void *lst)
{
	free(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (!(*lst)->next)
	{
		free(*lst);
		return ;
	}
	ft_lstclear(lst->next, del);
	del((void *)*lst);
	free(lst);
}

int	main(void)
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
}
