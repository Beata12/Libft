/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 08:39:21 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 13:01:55 by bmarek           ###   ########.fr       */
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

#include <stdio.h>

int	main(void)
{
	char original[] = "Hello, World!";
	char *duplicate = ft_strdup(original);
	if (duplicate != NULL)
	{
		printf("Original String: %s\n", original);
		printf("Duplicated String: %s\n", duplicate);
		//free(duplicate);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}