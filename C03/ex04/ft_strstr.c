/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:36:22 by misousa           #+#    #+#             */
/*   Updated: 2025/08/16 13:39:53 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

int main(void)
{
	// 1. Substring no meio
	printf("1: %s | %s\n", ft_strstr("abcdef", "cde"), strstr("abcdef", "cde"));

	// 2. Substring no início
	printf("2: %s | %s\n", ft_strstr("abcdef", "abc"), strstr("abcdef", "abc"));

	// 3. Substring no fim
	printf("3: %s | %s\n", ft_strstr("abcdef", "ef"), strstr("abcdef", "ef"));

	// 4. Substring igual à string
	printf("4: %s | %s\n", ft_strstr("abcdef", "abcdef"), strstr("abcdef",
			"abcdef"));

	// 5. Substring de 1 carácter
	printf("5: %s | %s\n", ft_strstr("abcdef", "d"), strstr("abcdef", "d"));

	// 6. Substring não encontrada
	printf("6: %p | %p\n", (void*)ft_strstr("abcdef", "gh"),
		(void*)strstr("abcdef", "gh"));

	// 7. to_find vazio
	printf("7: %s | %s\n", ft_strstr("abcdef", ""), strstr("abcdef", ""));

	// 8. str vazia
	printf("8: %p | %p\n", (void*)ft_strstr("", "a"), (void*)strstr("", "a"));

	// 9. Caracteres repetidos
	printf("9: %s | %s\n", ft_strstr("aaabcabcd", "abc"), strstr("aaabcabcd",
			"abc"));

	// 10. Substring com espaço
	printf("10: %s | %s\n", ft_strstr("isto é um teste", "um"),
		strstr("isto é um teste", "um"));

	return (0);
}