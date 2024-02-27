/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:33:41 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:33:47 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	int		len;
	char	*p;

	len = ft_strlen(s1) + 1;
	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, len);
	return (p);
}

/*int main(void)
{
	char *s1 = "Hola";
	char *p = strdup(s1);
	printf("result:    %s\n", p);

	char *s2 = "Hola";
	char *q = ft_strdup(s2);
	printf("ft_result: %s\n", q);

	return (0);
}*/
