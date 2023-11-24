/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:31:55 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:41:39 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int e)
{
	if (e >= 65 && e <= 90)
	{
		e = e + 32;
	}
	return (e);
}

#include <stdio.h>
int main()
{
	char a;
	a = 'G';
	printf("%c", ft_tolower(a));
}