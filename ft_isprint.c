/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:25:14 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:25:18 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
