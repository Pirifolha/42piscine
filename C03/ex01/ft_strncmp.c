/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:41:09 by misousa           #+#    #+#             */
/*   Updated: 2025/08/14 10:42:58 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	printf("%d\n", ft_strncmp("asddw", "a3dww", 4));
	printf("%d\n", strncmp("asddw", "a3dww", 4));
	printf("%d\n", ft_strncmp("abcX", "abcY", 3));
	printf("%d\n", strncmp("abcX", "abcY", 3));
} */