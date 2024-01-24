/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:02:16 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/24 16:27:02 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	f(unsigned int index, char *location)
{
	if (index == 0)
		location = 0;
	printf("location bef: %p\n", location);
	DOES NOT WORK AS INTENDED BECAUSE WORKING WITH COPY OF POINTER
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char *s = "Hola";

	ft_striteri(s, f);
	printf("location: %p\n", s);
}*/
