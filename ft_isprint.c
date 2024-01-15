/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:02:36 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/15 13:02:53 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int   main(void)
{
    int c = 0;
    printf("Value: %d\n", c);

    int result = isprint(c);
    printf("result: %d\n", result);

    int ft_result = ft_isprint(c);
    printf("ft_result: %d\n\n", ft_result);
    return (0);
}*/
