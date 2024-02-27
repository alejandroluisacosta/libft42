/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <aacosta@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:23:18 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/27 16:24:25 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
