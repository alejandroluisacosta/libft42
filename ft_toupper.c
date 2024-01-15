/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:21:50 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/15 13:22:17 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
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
