/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:57:24 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/15 16:38:13 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//DO POPRAWY
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char *)s)[i] != c)
	{
		i++;
	}
	if (i < n)
		return ((void *)((unsigned char *)s)[i]);
	return (NULL);
}

// #include <stdio.h>
// int main(void) {
//     char str[] = "Hello, World!";
//     char search_char = 'o';
//     size_t n = 13;
//     void *result = ft_memchr(str, search_char, n);
// 	printf("%d", result);
// }
