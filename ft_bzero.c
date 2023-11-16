/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:22:35 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/13 15:22:38 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "test";
// 	ft_bzero(str, 2);
// 	printf("%c\n", str[0]);
// 	printf("%c", str[3]);
// 	return (0);
// }