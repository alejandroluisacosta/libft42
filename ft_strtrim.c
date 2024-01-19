/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:34:43 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/19 12:04:07 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	forward_trim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = 0;
	while (s1[i] && set[j])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				start++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (start);
}

int	backwards_trim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	end;

	i = ft_strlen(s1) - 1;
	j = 0;
	end = 0;
	while ((s1 + i) >= s1 && set[j])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				end++;
				break ;
			}
			j++;
		}
		i--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new_str;
	int		new_len;

	if (!s1 || !set)
		return (NULL);
	start = forward_trim(s1, set);
	end = backwards_trim(s1, set);
	new_len = ft_strlen(s1) - start - end;
	if (new_len > 0)
	{
		new_str = malloc((new_len + 1) * sizeof(char));
		if (!new_str)
			return (NULL);
		ft_strlcpy(new_str, (s1 + start), (new_len + 1));
	}
	else
	{
		new_str = malloc(1 * sizeof(char));
		new_str[0] = '\0';
	}
	return (new_str);
}

/*int	main(void)
{
	char *s1 = "BACDEACB";
	char *set = "ABC";

	char *result = ft_strtrim(s1, set);
	printf("%s\n", result);

	return (0);
}*/
