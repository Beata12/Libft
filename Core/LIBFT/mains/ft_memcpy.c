/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:53:23 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:09:38 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	counter;

	if (dst == NULL && src == NULL)
		return (NULL);
	counter = 0;
	while (counter < n)
	{
		((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
		counter++;
	}
	return (dst);
}

#include <stdio.h>
int	main(void)
{
	char dst[] = "Hello";
	const char *src = "you";
	ft_memcpy(dst, src, 4);
	printf("%s", dst);
	return (0);
}