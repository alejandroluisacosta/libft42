/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:39:11 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/13 13:36:32 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f(void *content)
{
	printf("%c\n", (char)content);
	content += 1;
	printf("%c\n", (char)content);
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	//t_list	*ptr;

	if (!lst || !f)
		return ;
	//ptr = lst;
	while (lst->next)
	{
		printf("before: %c\n", (char)lst->content);
		f(lst->content);
		printf("after: %c\n", (char)lst->content);
		lst = lst->next;
	}
	//f(ptr->content);
}

int	main(void)
{
	t_list **lst = malloc(sizeof(void *));
	*lst = malloc(sizeof(t_list *));

	for (char i = 'a'; i < 'd'; i++)
	{
		t_list *node = ft_lstnew((void *)(size_t)i);
		ft_lstadd_front(lst, node);
	}

	t_list *node = *lst;
	/*do
	{
		printf("%c\n", (char)node->content);
		node = node->next;
	}
	while (node->next);
	printf("--\n");*/

	ft_lstiter(*lst, f);
	
	node = *lst;
	/*do
	{
		printf("%c\n", (char)node->content);
		node = node->next;
	}
	while (node->next);*/
}
