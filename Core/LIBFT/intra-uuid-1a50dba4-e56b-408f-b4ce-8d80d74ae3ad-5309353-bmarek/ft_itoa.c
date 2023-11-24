/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:45:02 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:07:46 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	abs(int n)
{
	if (n < 0)
		return (n * (-1));
	return (n);
}

int	digitlen(int n)
{
	int	i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*new;
	int		num;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = abs(n);
	i = digitlen(num) + (n < 0);
	new = (char *)malloc(sizeof(char) * (i + 1));
	if (new == NULL)
		return (NULL);
	new[i--] = '\0';
	while (i >= 0)
	{
		new[i] = num % 10 + '0';
		num = num / 10;
		i--;
	}
	if (n < 0)
	{
		new[0] = '-';
	}
	return (new);
}
