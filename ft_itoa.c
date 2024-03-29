/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:25:31 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:25:59 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int	digits;

	digits = 1;
	if (n < 0)
	{
		n *= -1;
		digits++;
	}
	while (n >= 10)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

static char	*copy_min_integer(void)
{
	char	*min_int;
	char	*str;

	str = "-2147483648";
	min_int = malloc(12 * sizeof(char));
	if (!min_int)
		return (NULL);
	ft_strlcpy(min_int, str, 12);
	return (min_int);
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*str;

	if (n == -2147483648)
		return (copy_min_integer());
	digits = digit_count(n);
	str = malloc((digits + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[digits] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[digits - 1] = (n % 10) + '0';
		n /= 10;
		digits--;
	}
	return (str);
}

/*int	main(void)
{
	int	n = 123;
	char *str = ft_itoa(n);

	printf("string: %s\n", str);
}*/
