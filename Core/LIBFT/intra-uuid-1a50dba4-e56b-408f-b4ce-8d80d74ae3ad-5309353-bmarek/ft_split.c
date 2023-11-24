/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:32:49 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 09:23:52 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	howmanyword(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s != 0)
	{
		if (*s != c && j == 0)
		{
			j = 1;
			i++;
		}
		else if (*s == c)
			j = 0;
		s++;
	}
	return (i);
}

char	*dupword(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (word == NULL)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**new;
	int		begining;

	new = malloc(sizeof(char *) * (howmanyword(s, c) + 1));
	if (!new || !s)
		return (0);
	i = 0;
	j = 0;
	begining = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && begining < 0)
			begining = i;
		else if ((s[i] == c || i == ft_strlen(s)) && begining >= 0)
		{
			new[j++] = dupword(s, begining, i);
			begining = -1;
		}
		i++;
	}
	new[j] = 0;
	return (new);
}
