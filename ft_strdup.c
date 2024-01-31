/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:24:02 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/31 16:49:08 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
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
