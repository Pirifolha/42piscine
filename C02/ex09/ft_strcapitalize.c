/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:02:13 by misousa           #+#    #+#             */
/*   Updated: 2025/08/11 17:25:07 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_c_is_alpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
	{
		return (0);
	}
	else
		return (1);
}

int	ft_c_is_num(char c)
{
	if (c < '0' || c > '9')
	{
		return (0);
	}
	else
		return (1);
}

char	ft_c_upcase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

char	ft_c_lowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (ft_c_is_alpha(str[i]) == 1)
	{
		str[i] = ft_c_upcase(str[i]);
	}
	while (str[i] != '\0')
	{
		if (ft_c_is_alpha(str[i]) == 0 && ft_c_is_num(str[i]) == 0)
		{
			if (str[i + 1] != '\0')
				str[i + 1] = ft_c_upcase(str[i + 1]);
		}
		if (ft_c_is_alpha(str[i]) == 1 || ft_c_is_num(str[i]) == 1)
		{
			if (str[i + 1] != '\0' && ft_c_is_alpha(str[i + 1]))
				str[i + 1] = ft_c_lowcase(str[i + 1]);
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";

// 	printf("%s\n", ft_strcapitalize(str));
// }