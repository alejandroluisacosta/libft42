/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:38:39 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:38:41 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*int   main(void)
{
    char    c = '=';
    char    d = '=';

    printf("result: %c\n", tolower(c));
    printf("ft_result: %c\n", ft_tolower(d));
    return (0);
}*/
