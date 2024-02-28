/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:28:11 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:28:30 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content)
{
	free(content);
}

void	*f(void *content)
{
	content += 1;
	return (content);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new_lst;
	t_list	*new_node;

	ptr = lst;
	new_lst = NULL;
	while (ptr)
	{
		new_node = ft_lstnew(ptr->content);
		if (!new_node)
		{
			del(ptr->content);
			free(new_node);
			return (NULL);
		}
		new_node->content = f(new_node->content);
		ft_lstadd_back(&new_lst, new_node);
		ptr = ptr->next;
	}
	return (new_lst);
}

/*int	main(void)
{
	t_list **lst = malloc(sizeof(void *));
	*lst = malloc(sizeof(t_list *));

	*lst = NULL;
	for (int i = 0; i < 5; i++)
	{
		t_list *node = ft_lstnew((void *)(size_t)i);
		ft_lstadd_front(lst, node);
	}

	t_list *node = *lst;
	do
	{
		printf("%d\n", (int)node->content);
		node = node->next;
	}
	while (node->next);

	printf("--\n");

	t_list *new_list = ft_lstmap(*lst, f, del);

	node = new_list;
	while (node->next)
	{
		printf("%d\n", (int)node->content);
		node = node->next;
	}
}*/
