/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:40:55 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 09:24:37 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
