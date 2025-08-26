/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:16:42 by misousa           #+#    #+#             */
/*   Updated: 2025/08/20 13:09:59 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strsize(int size, char **strs, char *sep)
{
	int	i;
	int	resize;

	i = 0;
	resize = 0;
	while (i < size)
	{
		resize = resize + ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	resize = resize + (ft_strlen(sep) * (size - 1));
	return (resize);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		resize;
	char	*res;

	if (size == 0)
	{
		res = malloc(sizeof(char));
		if (res == 0)
			return (0);
		res[0] = '\0';
		return (res);
	}
	resize = ft_strsize(size, strs, sep);
	res = malloc(sizeof(char) * (resize + 1));
	ft_strcpy(res, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(res, sep);
		ft_strcat(res, strs[i]);
		i++;
	}
	return (res);
}

/* int	main(void)
{
	int size;

	size = 2;

	char *strs[] = {"Hello", "World"};
	char *sep;
	char *result;

	sep = "-";

	result = ft_strjoin(size, strs, sep);

	printf("%s\n", result);
} */