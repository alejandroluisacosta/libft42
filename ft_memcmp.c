/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:05:21 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/16 11:41:28 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t			i;
	unsigned char	*string1;
	unsigned char	*string2;

	i = 0;
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while (i < n)
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	return (0);
}

/*int   main(void)
{
    int s1[4] = {1, 2, 3, 4};
    int s2[4] = {1, 2, 3, 5};

    printf("result: %d\n", memcmp("test\200", "test\0", 2));

    printf("ft_result: %d\n", ft_memcmp("test\200", "test\0", 2));
}*/
