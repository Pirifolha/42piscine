/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 20:04:41 by misousa           #+#    #+#             */
/*   Updated: 2025/08/05 18:23:42 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

/* int main ()
{
	ft_putstr("strptr");
	
	return 0;
}*/
