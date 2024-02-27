/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:34:00 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:34:03 by aacosta          ###   ########.fr       */
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
