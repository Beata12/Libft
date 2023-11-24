/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:49:41 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:38:53 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	nedlen;
// 	size_t	i;
// 	size_t	j;

// 	nedlen = 0;
// 	while (needle[nedlen] != '\0')
// 		nedlen++;
// 	i = 0;
// 	while (haystack[i] != '\0' && len > i)
// 	{
// 		j = 0;
// 		while (j < nedlen && haystack[i + j] == needle[j])
// 		{
// 			j++;
// 		}
// 		if (j == nedlen)
// 		{
// 			return ((char *)&haystack[i]);
// 		}
// 		i++;
// 		len--;
// 	}
// 	return (NULL);
// }
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *haystack;
	const char *needle;
	haystack = "aa";
	needle = "l";
	size_t len = 8;
	printf("%s\n", ft_strnstr(haystack, "abcd", len));
	printf("%s", strnstr(haystack, "abcd", len));
}
// int	main(void)
// {
// 	const char *haystack;
// 	const char *needle;
// 	char *result;
// 	haystack = "Hello, World!";
// 	needle = "l";
// 	size_t len = 3;
// 	result = strnstr(haystack, needle, len);
// 	if (result != NULL)
// 	{
// 		printf("Substring found at index: %ld\n", result - haystack);
// 	}
// 	else
// 	{
// 		printf("Substring not found.\n");
// 	}
// 	return (0);
// }