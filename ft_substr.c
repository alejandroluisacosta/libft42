/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:14:22 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/01 15:21:44 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	s_len;

	s_len = ft_strlen((char *) s);
	if (len < 0 || start >= s_len)
	{
		sub = ft_calloc(1, sizeof(char));
	}
	else if (len + start >= s_len)
		sub = ft_calloc(s_len - start + 1, sizeof(char));
	else
		sub = ft_calloc(len + 1, sizeof(char));
	if (sub == NULL)
		return (NULL);
	if (start < s_len)
	{
		if (len > s_len)
			ft_strlcpy(sub, (char *)(s + start), s_len + 1);
		else
			ft_strlcpy(sub, (char *)(s + start), len + 1);
	}
	return (sub);
}

/*int	main(void)
{
	//char *s = "Hola";
	char *sub = ft_substr("hola", 2, 18446744073709551);
	printf("%s\n", sub);
}*/
