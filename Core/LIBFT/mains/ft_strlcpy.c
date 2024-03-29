/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:52:35 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:35:01 by bmarek           ###   ########.fr       */
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

// size_t ft_strlcpy(char *restrict dst,
// const char * restrict src, size_t dstsize)
// {
// 	char *destination;

// 	destination = dst;
// 	if (dstsize == 0)
// 	{
// 		return (0);
// 	}
// 	while (*src != '\0')
// 	{
// 		if(dstsize > 1)
// 		{
// 			*destination = *src;
// 			destination++;
// 			src++;
// 			dstsize--;
// 		}
// 	}
// 	return (destination - dst);
// }
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char source[10] = "123456789";
	char destination[12];
	size_t result = ft_strlcpy(destination, source, sizeof(destination));
	printf("Result: %zu\n", result);
	printf("Destination: %s\n", destination);
	printf("-----\n");
	char standardDestination[12];
	size_t standardResult = strlcpy(standardDestination, source,
		sizeof(standardDestination));
	printf("Standard Result: %zu\n", standardResult);
	printf("Standard Destination: %s\n", standardDestination);
	return (0);
}