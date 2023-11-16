/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:05:02 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/16 07:51:38 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	strlcat(char *dst, const char *src, size_t destsize)
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
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	while (src_len && dst_len + 1 < destsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	return (dst_len + src_len);
}

// size_t	strlcat(char *restrict dst, 
//const char *restrict src, size_t destsize)
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
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char destin[20];
// 	char source[20];
// 	unsigned int result;

// 	destin[20] = "Hello";
// 	source[20] = ", world!";
// 	result = ft_strlcat(destin, source, 1);
// 	printf("Result: %s\n", destin);
// 	printf("Length: %d\n", result);
// 	return (0);
// }