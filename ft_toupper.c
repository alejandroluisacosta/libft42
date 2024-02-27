/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:38:59 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:39:01 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*int   main(void)
{
    char    c = ' ';
    char    d = ' ';

    printf("result: %c\n", toupper(c));
    printf("ft_result: %c\n", ft_toupper(d));
    return (0);
}*/
