/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:49:25 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/17 16:41:04 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char 	*str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	printf("%zu\n%zu\n", len1, len2);
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (char *)s1, len1 + 1);
	printf("%s\n", str);
	ft_strlcat(str, (char *)s2, len2 + 1);
	printf("%s\n", str);
	if (ft_strlen(str) == 0)
		str[0] = '\0';
	return (str);
}

int	main(void)
{
	char s1[] = "Hola ";
	char s2[] = "coc";
	char *s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
}
