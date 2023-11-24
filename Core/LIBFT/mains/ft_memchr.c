/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:57:24 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:08:51 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cha;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	cha = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == cha)
			return (str + i);
		i++;
	}
	return (NULL);
}

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	if (s == (void *)0)
// 		return (NULL);
// 	if (s == NULL)
// 		return (NULL);
// 	while (i < n)
// 	{
// 		if (((unsigned char *)s)[i] == ((unsigned char)c))
// 			return ((void *)(s + i));
// 		i++;
// 	}
// 	return (NULL);
// }

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "Hello, World!";
	char	search_char = 0;
	size_t	n = 0;
	void	*result, *result2;
	result = ft_memchr(str, search_char, n);
	result2 = memchr(str, search_char, n);
	printf("%s\n", result);
	printf("%s", result2);
}
