/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:17:04 by aacosta           #+#    #+#             */
/*   Updated: 2024/01/15 13:17:32 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

/*int   main(void)
{
    char *str = "Hola";

    printf("Value: %s\n", str);
    int result = strlen(str);
    printf("result: %d\n", result);

    int ft_result = ft_strlen(str);
    printf("ft_result: %d\n\n", ft_result);
    return (0);
}*/
