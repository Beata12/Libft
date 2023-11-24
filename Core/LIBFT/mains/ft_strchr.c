/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:10:51 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:22:40 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s != '\0' && *s != a)
	{
		s++;
	}
	if (*s == a)
		return ((char *)s);
	else
		return (NULL);
}

#include <stdio.h>
int	main(void)
{
	char	*result;
	const char a[] = "Hello, how are you?";
	char b = 'a';                          
	result = ft_strchr(a, b);
	printf("%s", result);
}
// int	main(void)
// {
// 	char	*result;
// 	const char a[] = "Hello, how are you?";
// 	char b = 'a';
// 	result = ft_strchr(a, b);
// 	printf("%s", result);
// 	if (result != NULL)
// 	{
// 		printf("Character '%c' found at position: %ld\n", b, result - a);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found.\n", b);
// 	}
// 	return (0);
// }