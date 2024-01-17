/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:14:22 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/17 15:48:55 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = malloc(len + 1 * sizeof(char));
	if (sub == NULL)
		return (NULL);
	if (start < ft_strlen((char *)s))
		ft_strlcpy(sub, (char *)(s + start), len + 1);
	else
		sub[0] = '\0';
	return (sub);
}

/*int	main(void)
{
	char *s = "Hola";
	char *sub = ft_substr(s, 400, 20);
	printf("%s\n", sub);
}*/
