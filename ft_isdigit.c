/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:24:57 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:25:01 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int main(void)
{
    char    c = 1;

    int result = isdigit(c);
    printf("result: %d\n", result);

    int ft_result = ft_isdigit(c);
    printf("ft_result: %d\n", ft_result);
}*/
