/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:35:02 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:35:04 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
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
