/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:05:21 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/15 13:06:21 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t	i;
	char	*string1;
	char	*string2;

	i = 0;
	string1 = (char *)s1;
	string2 = (char *)s2;
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

    printf("result: %d\n", memcmp(s1, s2, sizeof(s1)));

    printf("ft_result: %d\n", ft_memcmp(s1, s2, sizeof(s1)));
}*/
