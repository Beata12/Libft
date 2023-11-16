/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:30:09 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/13 15:37:14 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	j;

	i = 0;
	j = (unsigned char)c;
	while (i < len)
	{
		((unsigned char *)b)[i] = j;
		i++;
	}
	return (b);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[5];
// 	int		fill_char;
// 	size_t	len;

// 	fill_char = 'a';
// 	len = 7;
// 	ft_memset(str, fill_char, len);
// 	printf("%s\n", str);
// 	return (0);
// }