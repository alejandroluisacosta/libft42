/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:06:43 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/15 13:07:26 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*destination;

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
    char    src1[] = "Hola";
    char    dst1[] = "Adios";

    char    src2[] = "Hola";
    char    dst2[] = "Adios";

    memcpy(dst1, src1, strlen(src1));
    printf("%s\n", dst1);

    ft_memcpy(dst2, src2, strlen(src2));
    printf("%s\n", dst2);
}*/
