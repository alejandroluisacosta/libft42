/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:04:46 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/19 17:06:09 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (i == 0)
		{
			if (s[i] != c && s[i + 1] == c)
				count++;
		}
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	*substr1;
	char	*substr2;
	char	**result;
	int		count;

	count = ft_count(s, c);
	printf("count: %d\n", count);
	i = 0;
	while (s[i] != c)
		i++;
	substr1 = malloc((i + 1) * sizeof(char));	
	substr2 = malloc((ft_strlen(s) - i) * sizeof(char));
	result = malloc(3 * sizeof(char *));
	if (!substr1 || !substr2 || !result)
		return (NULL);
	ft_strlcpy(substr1, s, i + 1);
	ft_strlcpy(substr2, (s + i + 1), (ft_strlen(s) - i));
	result[0] = substr1;
	result[1] = substr2;
	return (result);
}

int	main(void)
{
	char *s = "---HOLA-AMIGO-MIO--TUYO";
	char c = '-';

	char **result  = ft_split(s, c);
	for (int i = 0; i < 2; i++)	
		printf("string%d: %s\n", i + 1, result[i]);
	free(result);

	return (0);
}
