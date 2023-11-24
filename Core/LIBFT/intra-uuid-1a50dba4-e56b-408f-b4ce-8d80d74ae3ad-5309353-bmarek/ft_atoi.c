/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:34:46 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 09:22:37 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	plus_minus;

	i = 0;
	result = 0;
	plus_minus = 1;
	while (str[i] != '\0')
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == 43 || str[i] == 45)
		{
			if (str[i] == 45)
				plus_minus = plus_minus * (-1);
			i++;
		}
		while (str[i] >= 48 && str[i] <= 57)
		{
			result = result * 10 + str[i] - 48;
			i++;
		}
		return (result * plus_minus);
	}
	return (0);
}
