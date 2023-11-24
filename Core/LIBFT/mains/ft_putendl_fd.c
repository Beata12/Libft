/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:02:25 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:19:59 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	int	lenght;

	lenght = ft_strlen(s);
	if (fd < 0 || s == 0)
		return ;
	write(fd, s, lenght);
	write(fd, "\n", 1);
}

int	main(void)
{
	ft_putendl_fd("Hello, world!", 1);
	return (0);
}