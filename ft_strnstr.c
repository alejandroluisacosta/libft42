/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:18:37 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/30 12:45:49 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	haystack_len;

	if (needle[0] == '\0')
		return (haystack);
	haystack_len = ft_strlen(haystack);
	if (haystack[0])
	{
		i = 0;
		while (i < len)
		{
			if (i < haystack_len && haystack[i] == needle[0])
			{
				j = 0;
				while (haystack[i + j] == needle[j] && haystack[i + j])
					j++;
				if (needle[j] == '\0' && i + j <= len)
					return (haystack + i);
			}
			i++;
		}
	}
	return (NULL);
}

/*int   main(void)
{
    char    haystack[] = "camarada";
    char    needle[] = "ada";

    printf("%p\n\n", haystack);
    printf("%p\n", strnstr("abc", "abcdef", 5));

    printf("%p\n", ft_strnstr("abc", "abcdef", 5));

    return (0);
}*/
