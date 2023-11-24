/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:05:02 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:34:56 by bmarek           ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst_len < destsize && dst[dst_len] != '\0')
	{
		dst_len++;
	}
	while ((dst_len + src_len + 1) < destsize && src[src_len] != '\0')
	{
		dst[dst_len + src_len] = src[src_len];
		src_len++;
	}
	if (dst_len != destsize)
		dst[dst_len + src_len] = '\0';
	return (dst_len + ft_strlen(src));
}

// size_t	strlcat(char *restrict dst,
// const char *restrict src, size_t destsize)
// {
// 	size_t	destination_len;
// 	size_t	source_len;

// 	destination_len = 0;
// 	source_len = 0;
// 	while (dst[destination_len] && destination_len < destsize)
// 	{
// 		destination_len++;
// 	}
// 	while (src[source_len] && ((destination_len + source_len
// 				+ 1) < destination_len))
// 	{
// 		dst[destination_len + source_len] = src[source_len];
// 		source_len++;
// 	}
// 	if (destination_len != destsize)
// 	{
// 		dst[destination_len + source_len] = '\0';
// 	}
// 	return (destination_len + source_len);
//}
#include <stdio.h>
int	main(void)
{
	char destin[20] = "Hello";
	char source[20] = ", world!";
	unsigned int result;

	result = ft_strlcat(destin, source, 1);
	printf("Result: %s\n", destin);
	printf("Length: %d\n", result);
	return (0);
}