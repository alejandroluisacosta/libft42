/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:34:29 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:34:33 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
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
	if (dst_len > dstsize)
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
