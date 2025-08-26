/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 18:11:28 by misousa           #+#    #+#             */
/*   Updated: 2025/08/19 14:09:41 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*result;

	i = 0;
	size = (max - min);
	result = malloc(sizeof(int) * size);
	if (min >= max)
	{
		return (0);
	}
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

/* int	main(int argc, char **argv)
{
	int i;

	i = 0;

	int *arr;
	int size;

	arr = ft_range(atoi(argv[1]), atoi(argv[2]));
	size = atoi(argv[2]) - atoi(argv[1]);

	if (argc == 3)
	{
		while (i < size)
		{
			printf("%d", arr[i]);
			i++;
		}
	}
} */