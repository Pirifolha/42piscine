/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:53:18 by misousa           #+#    #+#             */
/*   Updated: 2025/08/05 17:05:32 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	x;

	x = 0;
	while (x < size)
	{
		temp = *(tab + x);
		*(tab + x) = *(tab + size -1);
		*(tab + size -1) = temp;
		x++;
		size--;
	}
}

/* int main (void)
{
	int tab [] = {4, 6, 19, 30 ,132, 534};
	ft_rev_int_tab(tab, 6);
	printf("%d ", tab[0]);
	printf("%d ", tab[1]);
	printf("%d ", tab[2]);
	printf("%d ", tab[3]);
	printf("%d ", tab[4]);
	printf("%d ", tab[5]);
	return 0;
}
	*/
