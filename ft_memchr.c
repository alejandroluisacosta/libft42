/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:29:24 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:29:28 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (char)c)
			return (p + i);
		i++;
	}
	return (NULL);
}

/*int   main(void)
{
    char    s[] = "Hola";
    char    c = 'a';

    char    *p = memchr(s, c, 2);
    if (p)
        printf("position: %d\n", (int)(p - s));
    else printf("%p\n", p);

    char    *q = ft_memchr(s, c, 2);
    if (q)
        printf("ft_position: %d\n", (int)(q - s));
    else
        printf("%p\n", q);
}*/
