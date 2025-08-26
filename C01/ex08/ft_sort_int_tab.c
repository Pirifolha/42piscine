/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:39:52 by misousa           #+#    #+#             */
/*   Updated: 2025/08/08 12:25:15 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	temp;
	int	count;

	count = 0;
	while (count < size -1)
	{
		x = 0;
		while (x < size -1)
		{
			if (*(tab + x) > *(tab + x + 1))
			{
				temp = *(tab + x);
				*(tab + x) = *(tab + x + 1);
				*(tab + x + 1) = temp;
			}
			x++;
		}
		count++;
	}
}


// int main (void)
// {
// 	int tab [] = {5, 2, 10, 7, 82, 128};

// 	ft_sort_int_tab(tab, 6);
// 	printf("%d ", tab[0]);
// 	printf("%d ", tab[1]);
// 	printf("%d ", tab[2]);
// 	printf("%d ", tab[3]);
// 	printf("%d ", tab[4]);
// 	printf("%d ", tab[5]);

// 	return 0;
// }

