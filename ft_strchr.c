/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:13:34 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/19 16:50:01 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/*int   main(void)
{
    char    str[] = "Hello";
    char    c = '\0';

    int result = strchr(str, c) - str;
    printf("position: %d\n", result);

    int ft_result = ft_strchr(str, c) - str;
    printf("ft_position: %d\n", ft_result);

    return (0);
}*/
