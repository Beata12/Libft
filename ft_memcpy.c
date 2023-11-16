/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:53:23 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/16 07:51:28 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	counter;
	char	*d;
	char	*s;

	counter = 0;
	d = (char *)dst;
	s = (char *)src;
	while (counter < n)
	{
		d[counter] = s[counter];
		counter++;
	}
	return (dst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char dst[] = "Hello";
// 	const char *src = "you";

// 	ft_memcpy(dst, src, 4);
// 	printf("%s", dst);

// 	return (0);
// }