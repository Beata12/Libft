/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:49:41 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/16 12:38:37 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nedlen;
	size_t	i;
	size_t	j;

	nedlen = 0;
	while (needle[nedlen] != '\0')
		nedlen++;
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (j < nedlen && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (j == nedlen)
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char	*haystack;
// 	const char	*needle;
// 	char		*result;

// 	haystack = "Hello, World!";
// 	needle = "World";
// 	size_t len = 13; 
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