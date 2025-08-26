/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:30:10 by misousa           #+#    #+#             */
/*   Updated: 2025/08/11 17:59:39 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	int				i;
	unsigned char	c;
	int				high;
	int				low;

	hex = "0123456789abcdef";
	i = 0;
	while (i < ft_strlen(str))
	{
		c = str[i];
		high = c / 16;
		low = c % 16;
		if ((c > 0 && c <= 31) || c == 127)
		{
			write(1, "\\", 1);
			write(1, &hex[high], 1);
			write(1, &hex[low], 1);
		}
		else
		{
			write(1, &c, 1);
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_putstr_non_printable("Coucou\ntu vas bien");
// 	printf("%s", "\n");
// 	return (0);
// }