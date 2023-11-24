/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:24:50 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:00:14 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

#include <stdio.h>
int	main(void)
{
	char	c;
	c = '2';
	printf("%d\n", ft_isalnum(c));
	return (0);
}
