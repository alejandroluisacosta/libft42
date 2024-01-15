/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:14:34 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/15 17:55:07 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dst_len = 0;
	while (dst[dst_len])
		dst_len++;
	if (dstsize > 0 && dst_len <= dstsize)
	{
		i = 0;
		while (dst_len + i < dstsize - 1 && i < src_len) 
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	if (src_len > dstsize)
		return (src_len + dstsize);
	return (dst_len + src_len);
}

/*int   main(void)
{
    char    src1[] = "puntas";
    char    dst1[10] = "saca";

    char    src2[] = "puntas";
    char    dst2[10] = "saca";

    size_t  result = strlcat(dst1, src1, sizeof(dst1));
    printf("%s,    bytes: %zu\n", dst1, result);

    size_t  ft_result = ft_strlcat(dst2, src2, sizeof(dst2));
    printf("%s, ft_bytes: %zu\n", dst2, ft_result);
}*/
