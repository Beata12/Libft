/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:02:25 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 09:23:40 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	lenght;

	lenght = ft_strlen(s);
	if (fd < 0 || s == 0)
		return ;
	write(fd, s, lenght);
	write(fd, "\n", 1);
}
