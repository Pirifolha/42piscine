/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:46:45 by misousa           #+#    #+#             */
/*   Updated: 2025/08/05 17:52:24 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main ()
{
	int div;
	int mod;

	int *divptr = &div;
	int *modptr = &mod;

	ft_div_mod(10, 2, divptr, modptr);
	printf("%d\n", div);
	printf("%d\n", mod);
	return 0;
}*/
