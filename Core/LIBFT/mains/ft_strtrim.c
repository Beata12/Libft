/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:40:55 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:40:43 by bmarek           ###   ########.fr       */
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

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_charcheck(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s);
		i++;
	}
	if (c == *s)
		return ((char *)s);
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*new;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_charcheck(set, s1[i]) && i <= j)
		i++;
	if (i >= j)
		return (ft_strdup(""));
	while (j >= 0 && ft_charcheck(set, s1[j]))
		j--;
	new = malloc(sizeof(char) * (j - i + 2));
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, &s1[i], j - i + 2);
	return (new);
}

#include <stdio.h>
int	main(void)
{
	const char	*original;
	const char	*set;
	char		*trimmed;
	original = "        ";
	set = " ";
	trimmed = ft_strtrim(original, set);
	if (trimmed != NULL)
	{
		printf("Original: '%s'\n", original);
		printf("Trimmed : '%s'\n", trimmed);
		// Remember to free the allocated memory
		free(trimmed);
	}
	else
	{
		printf("Allocation failed or input strings are NULL.\n");
	}
	return (0);
}