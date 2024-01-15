/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:20:02 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/15 13:20:53 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
		i++;
	j = i;
	while (j >= 0)
	{
		if (s[j] == c)
			return (s + j);
		j--;
	}
	return (NULL);
}

/*int   main(void)
{
    char    str[] = "Hello";
    char    c = 'l';

    char    *p = strrchr(str, c);
    if (p)
        printf("result: %d\n", (int)(p - str));
    else
        printf("result: %p\n", p);


    char    *q = ft_strrchr(str, c);
    if (q)
        printf("ft_result: %d\n", (int)(q - str));
    else
        printf("ft_result: %p\n", q);
}*/
