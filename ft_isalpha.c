/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:00:21 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/15 15:56:28 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int main(void)
{
    char    c = '\0';

    int result = isalpha(c);
    printf("isalpha: %d\n", result);

    int ft_result = ft_isalpha(c);
		printf("ft_isalpha: %d\n", ft_result);

}*/
