/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:21:41 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:24:06 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

/*int   main(void)
{
    char    s[] = "Hola";
    char    t[] = "Hola";

    bzero(s + 2, 1);
    for (unsigned int i = 0; i < 4; i++)
    {
        printf("%c\n", s[i]);
    }

    ft_bzero(t + 2, 1);
    for (unsigned int i = 0; i < 4; i++)
    {
        printf("%c\n", t[i]);
    }
}*/
