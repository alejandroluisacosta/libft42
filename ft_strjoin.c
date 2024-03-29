/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:34:15 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:34:18 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tot_len;
	char	*str;

	tot_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(tot_len * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcat(str, (char *)s2, tot_len);
	if (ft_strlen(str) == 0)
		str[0] = '\0';
	return (str);
}

/*int	main(void)
{
	char *s1 = NULL;
	strlen(s1);
	char s2[] = "";
	char *s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
}*/

// POSSIBLE & UNCHECKED CORNER CASES:
// S1/S2 = NULL -- BOTH NULL
