/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:24:41 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:24:43 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main(void)
{
    for (int c = 125; c < 129; c++)
    {
        printf("Value: %d\n", c);
        int result = isascii(c);
        printf("result: %d\n", result);

        int ft_result = ft_isascii(c);
        printf("ft_result: %d\n\n", ft_result);
    }
}*/
