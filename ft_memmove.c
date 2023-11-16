/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 08:16:30 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/14 08:24:58 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*source;
	char	*destination;
	size_t	i;

	i = 0;
	if (destination > source)
	{
		while (len > 0)
		{
			len--;
			destination[len] = source[len];
		}
	}
	else
	{
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char source[] = "Hello, World!";
// 	char destination[20];
// 	ft_memmove(destination, source, 5);
// 	printf("Destination: %s\n", destination);
// 	return (0);
// }