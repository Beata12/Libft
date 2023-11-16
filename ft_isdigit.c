/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:24:43 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/13 11:27:32 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c;

// 	c = '6';
// 	printf("%d\n", ft_isdigit(c));
// 	return (0);
// }
