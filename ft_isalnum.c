/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:59:14 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/15 13:00:08 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*int main(void)
{
    char    c = 'A';

    int result = isalnum(c);
    printf("result: %d\n", result);

    int ft_result = ft_isalnum(c);
    printf("ft_result: %d\n", ft_result);
}*/
