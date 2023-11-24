/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:57:24 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 09:23:09 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cha;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	cha = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == cha)
			return (str + i);
		i++;
	}
	return (NULL);
}
