/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:07:49 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/30 11:51:01 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t	i;
	char	*destination;
	char	*source;

	if (!dst && !src)
		return (NULL);
	destination = (char *) dst;
	source = (char *) src;
	if (destination > source)
	{
		i = len - 1;
		while (source + i >= source)
		{
			destination[i] = source[i];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/*int   main(void)
{
    char    s[] = "Amigo mio";
    char    t[] = "Amigo mio";

    memmove(s, s + 2, sizeof(char) * 2);
    printf("result:    %s\n", s);

    ft_memmove(t, t + 2, sizeof(char) * 2);
    printf("ft_result: %s\n", t);
}*/
