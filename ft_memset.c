/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:09:57 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/15 13:10:48 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*p;

	p = (char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}

/*int   main(void)
{
    int b[3] = {1, 2, 3};

    char    *result = memset(b, 65, 5);
    printf("%s\n", result);

    char    *ft_result = ft_memset(b, 66, 7);
    printf("%s\n", ft_result);

    return (0);
}*/
