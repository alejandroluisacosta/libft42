/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:04:46 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/02 16:53:10 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	substr_count(char const *s, char c)
{
	int	i;
	int	count;

	if (!*s ||  !s || !c)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (count == 0)
		{
			if (s[i] != c)
			{
				count++;
				i++;
			}
		}
		if (i > 0 && s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static void	mem_free(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static int	substr_divide(char **array, char const *s, char c, int sub_count)
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
		printf("array[copied] = %s\n", array[copied_count]);
		if (!array[copied_count])
		{
			mem_free(array);
			return 1;
		}
		copied_count++;
	}
	array[copied_count] = NULL;
	return 0;
}

int	all_c(char const *s, char c)
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
	int		err = 0;
	char	**array;

	if (!s)
		return NULL;
	printf("not here\n");
	sub_count = substr_count(s, c);
	array = calloc((sub_count + 1), sizeof(char *));
	if (!array)
		return (NULL);
	if (*s && all_c(s, c) != 1)	
		err = substr_divide(array, s, c, sub_count);
	if (all_c(s, c) == 1 || sub_count == 0)
	{
		mem_free(array);
		return NULL;
	}
	if (err == 1)
		return NULL;
	return (array);
}

/*int	main(void)
{
	char *s;
	//char c = ' ';
	s = "Hello";
	char **array = ft_split("hello!", ' ');

	int i = 0;
	while (array[i])
	{
		printf("%dth string: %s\n", i, array[i]);
		i++;
	}

	return (0);
}*/
