/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:04:46 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/24 12:49:30 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	substr_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (count == 0)
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

char	*substr_write(char const *s, int cut_point, int last_c)
{
	char	*substr;

	substr = malloc((cut_point - last_c + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, (s + last_c), (cut_point - last_c + 1));
	return (substr);
}

void	substr_divide(char **array, char const *s, char c, int sub_count)
{
	int	cut_point;
	int	last_c;
	int	copied_count;

	cut_point = 0;
	last_c = 0;
	copied_count = 0;
	while (copied_count < sub_count)
	{
		if (s[cut_point] == c)
		{
			while (s[cut_point] == c)
				cut_point++;
		}
		last_c = cut_point;
		while (s[cut_point] != c && s[cut_point])
			cut_point++;
		array[copied_count] = substr_write(s, cut_point, last_c);
		copied_count++;
	}
	array[sub_count] = NULL;
}

int	all_c(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	if (!s[i])
		return (1);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		sub_count;
	char	**array;

	if (!s)
		return (NULL);
	if (all_c(s, c))
	{
		array = malloc(1 * sizeof(char));
		array[0] = NULL;
		return (array);
	}
	sub_count = substr_count(s, c);
	array = malloc((sub_count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	if (sub_count > 0)
		substr_divide(array, s, c, sub_count);
	else
	{
		array[0] = (char *)s;
		array[1] = NULL;
	}
	return (array);
}

/*int	main(void)
{
	char *s = "Hola amigo mio";
	char c = ' ';
	char **array = ft_split(s, c);

	for (int i = 0; i < 4; i++)
		printf("%dth string: %s\n", i, array[i]);

	return (0);
}*/
