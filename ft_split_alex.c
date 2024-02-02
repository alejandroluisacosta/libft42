/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:04:46 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/02 15:05:14 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	substr_count(char const *s, char c)
{
	int	i;
	int	count;

	if (!s || !c)
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

void	mem_free(char **array, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		printf("i = %d | index = %d\n", i, index);
		free(array[i]);
		i++;
	}
	//free(array);
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
		while (s[cut_point] && s[cut_point] != c)
			cut_point++;
		array[copied_count] = ft_substr(s, last_c, (cut_point - last_c));
		if (!array[copied_count])
			mem_free(array, copied_count);
		copied_count++;
	}
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
	char	**array;

	sub_count = substr_count(s, c);
/*	if (!s || !s[0] || all_c(s, c) || sub_count == 0)
		array = ft_calloc(2, sizeof(char *));
	else*/
		array = ft_calloc((sub_count + 1), sizeof(char *));
	printf("array adi = %p\n", array);
	if (!array)
		return (NULL);
	if (!s || !s[0] || all_c(s, c) || sub_count == 0)
	{
		if (!s[0] || all_c(s, c))
			array[0] = NULL;
		else
		{
			array[0] = ft_substr(s, 0, ft_strlen(s));
			printf("array[0] adi = %p\n", &array[0]);
			if (!array[0])
			{
				mem_free(array, 1);
				return NULL;
			}
		}
	}
	else
		substr_divide(array, s, c, sub_count);
	printf("i am alivee\n");
	/*if (!array)
		return (NULL);*/
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
