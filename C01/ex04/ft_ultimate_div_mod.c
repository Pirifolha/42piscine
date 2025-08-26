/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:54:37 by misousa           #+#    #+#             */
/*   Updated: 2025/08/05 18:01:44 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int main ()
{
	int a = 4;
	int b = 8;

	int *aptr = &a;
	int *bptr = &b;

	ft_ultimate_div_mod(aptr, bptr);

	printf("%d ", a);
	printf("%d ", b);
}*/