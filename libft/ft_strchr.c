/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:50:01 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/24 11:59:09 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** BRIEF: Locates the first occurrence of the character 'c' 
	in the string pointed to by 's'.
**
** @param s The string to be searched.
** @param c The character to locate, passed as an integer.
**
** @return A pointer to the first occurrence of 'c' in 's'. 
** 	Returns NULL if the character is not found.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	const char *str;
	char point;
	char *result;

	if (argc == 3)
	{
		str = argv[1];

		point = argv[2][0];

		result = ft_strchr(str, point);

		printf("String de busca: \"%s\"\n", str);
		printf("Caractere procurado: '%c'\n", point);

		if (result != NULL)
		{
			printf("\nResultado:\n");
			printf("-> Encontrado! Endereço: %p\n", result);
			printf("-> Substring a partir do ponto: \"%s\"\n", result);
		}
		else
		{
			printf("\nResultado:\n");
			printf("-> Caractere '%c' não foi encontrado na string.\n", point);
		}
	}	
	else
	{
		printf("Uso: %s <string> <caractere_de_busca>\n", argv[0]);
		printf("Exemplo: %s \"testing\" e\n", argv[0]);
		return (1);
	}
	return (0);
}
*/
