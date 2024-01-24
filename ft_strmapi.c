/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:30:19 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/24 16:54:21 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	f(unsigned int index, char c)
{
	char	*p;
	char	copy;

	p = malloc(1 * sizeof(char));
	if (p == NULL)
		return ('\0');
	if (index == 0)
		*p = ft_toupper(c);
	else
		*p = ft_tolower(c);
	copy = *p;
	free (p);
	return (copy);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*new_str;
	int		i;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	new_str = malloc ((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[len] = '\0';
	return (new_str);
}

/*int	main(void)
{
	char *s = "holA";
	char *new_str = ft_strmapi(s, f);
	printf("new string: %s\n", new_str);
}*/
