/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:14:22 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/31 17:00:31 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (len < 0)
	{
		sub = malloc(1 * sizeof(char));
		sub[0] = '\0';
	}
	if (len > ft_strlen(s))
		sub = malloc(ft_strlen(s) + 1 * sizeof(char));
	else
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
	char *sub = ft_substr("hola", 0, 18446744073709551615);
	printf("%s\n", sub);
}*/
