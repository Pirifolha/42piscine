/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:10:27 by misousa           #+#    #+#             */
/*   Updated: 2025/08/05 17:59:35 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main ()
{
	int a = 4;
	int b = 8;

	int *aptr = &a;
	int *bptr = &b;

	ft_swap(aptr, bptr);

	printf("%d ", a);
	printf("%d ", b);
}*/