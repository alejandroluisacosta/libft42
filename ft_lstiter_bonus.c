/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:27:20 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:27:23 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	f(void *content)
{
	content += 1;
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (!lst || !f)
		return ;
	ptr = lst;
	while (ptr->next)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
	f(ptr->content);
}

/*int	main(void)
{
	t_list **lst = malloc(sizeof(void *));
	*lst = malloc(sizeof(t_list *));

	for (char i = 'a'; i < 'd'; i++)
	{
		t_list *node = ft_lstnew((void *)(size_t)i);
		ft_lstadd_front(lst, node);
	}

	t_list *node = *lst;
	do
	{
		printf("%c\n", (char)node->content);
		node = node->next;
	}
	while (node->next);
	printf("--\n");

	ft_lstiter(*lst, f);
	
	node = *lst;
	do
	{
		printf("%c\n", (char)node->content);
		node = node->next;
	}
	while (node->next);
}*/
