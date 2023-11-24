/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 08:38:16 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:26:32 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if ((s1 == NULL && s2 == NULL) || new == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new[j] = s2[i];
		i++;
		j++;
	}
	new[j] = '\0';
	return (new);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char *prefix;
	const char *suffix;
	char *result;
	// Przykładowe ciągi znaków
	prefix = "Hello, ";
	suffix = "world!";
	// Utwórz nowy ciąg, łącząc prefix i suffix
	result = ft_strjoin(prefix, suffix);
	// Sprawdź, czy alokacja pamięci powiodła się
	if (result != NULL)
	{
		// Wyświetl wynik
		printf("Result: %s\n", result);
		// Zwolnij pamięć po wyniku
		free(result);
	}
	else
	{
		// Komunikat o błędzie alokacji pamięci
		printf("Memory allocation failed.\n");
	}
	return (0);
}