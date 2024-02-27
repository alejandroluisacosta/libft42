/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:37:15 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:37:19 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n > 0)
	{
		i = 0;
		while (i < n && (s1[i] || s2[i]))
		{
			if ((unsigned char)s1[i] > (unsigned char)s2[i])
				return (1);
			else if ((unsigned char)s1[i] < (unsigned char)s2[i])
				return (-1);
			i++;
		}
	}
	return (0);
}

/*int   main(void)
{
    char *s1 = "Hola";
    char *s2 = "Hol";

    printf("result: %d\n", strncmp("test\200", "test\0", 6));

    printf ("ft_result: %d\n", ft_strncmp("test\200", "test\0", 6));

    return (0);
}*/
