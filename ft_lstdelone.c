/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:12:28 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/09 14:49:02 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *node)
{
	free(node);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del((void *)lst);
	free(lst);
}

int	main(void)
{
	t_list *node = ft_lstnew((void *)(size_t)1);
	printf("%d\n", (int)node->content);
	ft_lstdelone(node, del);
	printf("%d\n", (int)node->content);
}
