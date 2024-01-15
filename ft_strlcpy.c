/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:15:57 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/15 13:16:44 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*int   main(void)
{
    char    src1[] = "carinoso";
    char    dst1[] = "Hola";

    char    src2[] = "carinoso";
    char    dst2[] = "Hola";

    size_t  result = strlcpy(dst1, src1, sizeof(dst1));
    printf("%s,    bytes: %zu\n", dst1, result);

    size_t ft_result = ft_strlcpy(dst2, src2, sizeof(dst2));
    printf("%s, ft_bytes: %zu\n", dst2, ft_result);

    return (0);
}*/
