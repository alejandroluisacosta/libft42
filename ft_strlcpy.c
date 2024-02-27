/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:34:45 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:34:48 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		if (!src[0])
			dst[0] = '\0';
		else
		{
			while (i < dstsize - 1 && src[i])
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (ft_strlen(src));
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
