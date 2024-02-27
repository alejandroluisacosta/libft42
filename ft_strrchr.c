/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:37:45 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:37:48 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
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
