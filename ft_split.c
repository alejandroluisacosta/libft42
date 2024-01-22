/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:04:46 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/22 16:38:15 by aacosta          ###   ########.fr       */
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

void	copy_and_assign(char **array, char const *s, int current_s_position, int last_c, int arr_element)
{
	char	*substr;

	substr = malloc((current_s_position - last_c + 1) * sizeof(char));
	if (substr != NULL)
	{
		ft_strlcpy(substr, (s + last_c), (current_s_position - last_c + 1));
		array[arr_element] = substr;
	}
}

void	substr_copy(char **array, char const *s, char c, int total_count)
{
	int	i;
	int	last_c;
	int	copied_count;

	i = 0;
	last_c = 0;
	copied_count = 0;
	while (copied_count < total_count)
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
		}
		last_c = i;
		while (s[i] != c && s[i])
			i++;
		copy_and_assign(array, s, i, last_c, copied_count);
		// Assign right here and save an argument for the above function
		copied_count++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		substr_counter;
	char	**array;

	substr_counter = substr_count(s, c);
	array = malloc((substr_counter + 1) * sizeof(char *));
	substr_copy(array, s, c, substr_counter);
	array[substr_counter] = NULL;
	return (array);
}

/*int	main(void)
{
	char *s = "   Hola  amigo mio";
	char c = ' ';
	char **array = ft_split(s, c);

	for (int i = 0; array[i]; i++)
		printf("%dth array: %s\n", i, array[i]);

	return (0);
}*/
