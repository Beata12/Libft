/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 08:37:39 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:41:29 by bmarek           ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!(new))
		return (NULL);
	while (*src)
	{
		new[i++] = *src++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	i = 0;
	if (s == 0)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL || s == NULL)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		new[i] = s[i + start];
		i++;
	}
	new[i] = '\0';
	return (new);
}

#include <stdio.h>
int main (void)
{
	const char	*originalString;
	char		*substring;
	// Przykładowy ciąg znaków
	originalString = "Hello, World!";
	// Indeks początkowy i maksymalna długość dla podciągu
	unsigned int startIndex = 7; // zaczynamy od 'W'
	size_t maxLength = 5;        // maksymalna długość to 5 znaków
	// Wywołanie funkcji ft_substr
	substring = ft_substr(originalString, startIndex, maxLength);
	// Sprawdzenie, czy alokacja pamięci powiodła się
	if (substring != NULL)
	{
		// Wyświetlenie oryginalnego ciągu i uzyskanego podciągu
		printf("Original String: %s\n", originalString);
		printf("Substring: %s\n", substring);
		// Zwolnienie pamięci zaalokowanej dla podciągu
		free(substring);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
