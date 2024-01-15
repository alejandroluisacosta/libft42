/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:54:08 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/15 12:57:05 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	value;
	int	sign;

	i = 0;
	value = 0;
	sign = 1;
	while (str[i] && (ft_isnum(str[i]) == 1 || ft_isspace(str[i]) == 1
			|| str[i] == '+' || str[i] == '-'))
		{
		if (str[i] == '-' || str[i] == '+')
		{
			if (ft_isnum(str[i + 1]) == 0)
				return (0);
			if (str[i] == '-')
				sign *= -1;
		}
		else if (ft_isnum(str[i]))
			value = value * 10 + (str[i] - '0');
		i++;
	}
	return (value * sign);
}

/*int   main(void)
{
	char    num[] = "   -a1234";

	printf("result: %d\n", atoi(num));
	printf("ft_result: %d\n", ft_atoi(num));

	return (0);
}*/
