/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:32:37 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:33:12 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	substr_count(char const *s, char c)
{
	int	i;
	int	count;
	int	found;

	if (!s || !c)
		return (1);
	i = 0;
	count = 1;
	found = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			found = 1;
		if (i > 0 && s[i] != c && s[i - 1] == c)
		{
			if (found != 0)
				count++;
			found = 1;
		}
		i++;
	}
	return (count);
}

static void	mem_free(char **array, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(array[i]);
		i++;
	}
	free (array);
}

static void	substr_divide(char **array, char const *s, char c, int sub_count)
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
		while (s[cut_point] && s[cut_point] != c)
			cut_point++;
		array[copied_count] = ft_substr(s, last_c, (cut_point - last_c));
		if (!array[copied_count])
			mem_free(array, copied_count);
		copied_count++;
	}
}

static int	all_c(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	if (!s[i] && i > 0)
		return (1);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		sub_count;
	char	**array;

	sub_count = substr_count(s, c);
	array = ft_calloc((sub_count + 1), sizeof(char *));
	if (!array)
		return (NULL);
	if (!s[0] || all_c(s, c))
		array[0] = NULL;
	else
		substr_divide(array, s, c, sub_count);
	return (array);
}

/*int	main(void)
{
	//char *s;
	//char c = ' ';
	//s = "Hello";
	char **array = ft_split("tripouille", ' ');

	int i = 0;
	while (array[i])
	{
		printf("%dth string: %s\n", i, array[i]);
		i++;
	}
	system("leaks -q a.out");

	return (0);
}*/
