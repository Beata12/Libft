/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:05:02 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 09:24:11 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
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
	while ((dst_len + src_len + 1) < destsize && src[src_len] != '\0')
	{
		dst[dst_len + src_len] = src[src_len];
		src_len++;
	}
	if (dst_len != destsize)
		dst[dst_len + src_len] = '\0';
	return (dst_len + ft_strlen(src));
}
