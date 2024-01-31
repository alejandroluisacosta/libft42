/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:24:03 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/30 12:13:17 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		value;

	i = 0;
	value = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 10)
		ft_putnbr_fd((n / 10), fd);
	value = n % 10 + '0';
	ft_putchar_fd(value, fd);
}

/*int	main(void)
{
	int	n = 54321;

	int	file = open("num.txt", O_CREAT | O_RDWR, 0777);
	ft_putnbr_fd(n, file);
	close(file);
}*/
