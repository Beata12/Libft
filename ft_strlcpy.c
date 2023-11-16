/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:52:35 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/16 07:51:43 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	if (dstsize == 0)
		return (0);
	while (src[i] != '\0' || dst[i] != '\0')
	{
		if (i + 1 > dstsize - 1)
		{
			dst[i] = '\0';
			return (i + 1);
		}
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
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

// #include <stdio.h>
// #include <string.h>
// char a = 'a';
// int main(void)
// {
//     // Define a source string for testing
//     const char source[10] = "123456789";

//
// Choose a destination buffer with enough space to hold the source string
//     char destination[12];

//
// Use your ft_strlcpy function to copy the source string to the destination
//     size_t result = ft_strlcpy(destination, source, sizeof(destination));

//     // Print the result and the destination string
//     printf("Result: %zu\n", result);
//     printf("Destination: %s\n", destination);

// 	printf("-----\n");

//     // Compare with the standard strlcpy function
//     char standardDestination[12];
//     size_t standardResult = strlcpy(standardDestination,
// source, sizeof(standardDestination));

//     // Print the standard result and the standard destination string
//     printf("Standard Result: %zu\n", standardResult);
//     printf("Standard Destination: %s\n", standardDestination);

//     return (0);
// }