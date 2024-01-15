/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:13:34 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/15 13:14:08 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
		i++;
	j = 0;
	while (j <= i)
	{
		if (s[j] == c)
			return (s + j);
		j++;
	}
	return (NULL);
}

/*int   main(void)
{
    char    str[] = "Hello";
    char    c = 'z';

    int result = strchr(str, c) - str;
    printf("position: %d\n", result);

    int ft_result = ft_strchr(str, c) - str;
    printf("ft_position: %d\n", ft_result);

    return (0);
}*/
