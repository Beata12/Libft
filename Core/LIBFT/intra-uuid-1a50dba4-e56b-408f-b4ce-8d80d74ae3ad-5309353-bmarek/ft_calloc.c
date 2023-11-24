/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 08:38:43 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 09:22:43 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	total;
	void	*new;

	i = 0;
	total = count * size;
	new = malloc(total);
	if (new == NULL)
		return (new);
	else
	{
		while (i < total)
		{
			((unsigned char *)new)[i] = 0;
			i++;
		}
		return (new);
	}
	return (new);
}
