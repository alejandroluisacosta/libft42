/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:22:18 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:24:19 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

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
