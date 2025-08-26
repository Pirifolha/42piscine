/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 21:06:58 by misousa           #+#    #+#             */
/*   Updated: 2025/08/19 16:04:43 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = (max - min);
	*range = malloc(sizeof(int) * size);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

/* int	main(int argc, char **argv)
{
	int max;
	int min;
	int size;

	if (argc == 3)
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);

		int *range;

		size = ft_ultimate_range(&range, min, max);

		printf("%d\n", size);

		for (int i = 0; i < size; i++)
		{
			printf("%d", range[i]);
		}
		printf("\n");
	}

	return (0);
} */