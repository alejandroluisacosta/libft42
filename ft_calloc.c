/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:40:41 by aacosta           #+#    #+#             */
/*   Updated: 2024/02/02 12:42:03 by aacosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*x;
	size_t			i;

	x = (unsigned char *)malloc(count * size);
	if (!x)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		x[i] = '\0';
		i++;
	}
	return (x);
}

/*int	main(void)
{
	int	size = rand();
	int *junk = 0;
	
	for (int i = 0; i < 1000; i++)
	{
		size = rand() % 16000;
		junk = malloc (size * sizeof(int));
		for (int j = 0; j < size; j++)
		{
			junk[j] = rand();
		}
		free(junk);
	}

	int *array;
	array = malloc(100 * sizeof(int));
	for (int i = 0; i < 100; i++)
		printf("%d", array[i]);
	free(array);

	printf("\n");

	int	*array1;
	array1 = calloc(100, sizeof(int));
	for (int i = 0; i < 100; i++)
		printf("%d", array1[i]);
	free(array1);

	printf("\n");

	int *array2;
    array2 = ft_calloc(100, sizeof(int));
    for (int i = 0; i < 100; i++)
        printf("%d", array2[i]);
    free(array2);
	
	printf("\n");
}*/
