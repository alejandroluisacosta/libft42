/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:13:34 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/30 12:26:20 by aacosta          ###   ########.fr       */
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
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/*int   main(void)
{
    char    str[] = "Hello";
    char    c = '\0';

    char *result = strchr("teste", 'e');
    printf("position: %p\n", result);

    char *ft_result = ft_strchr("teste", 'e');
    printf("ft_position: %p\n", ft_result);

    return (0);
}*/
