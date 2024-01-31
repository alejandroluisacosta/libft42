/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:06:43 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/31 09:47:46 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*destination;

	if (!dst && !src)
		return (NULL);
	i = 0;
	source = (char *)src;
	destination = (char *)dst;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}

/*int   main(void)
{
    char    *src1 = NULL;
    char    *dst1 = NULL;

    char    *src2 = NULL;
    char    *dst2 = NULL;

    memcpy(dst1, src1, 3);
    printf("%s\n", dst1);

    ft_memcpy(dst2, src2, 3);
    printf("%s\n", dst2);
}*/
