/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:47:52 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/09 13:11:44 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return (NULL);
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
