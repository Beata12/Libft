/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:39:55 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:21:03 by bmarek           ###   ########.fr       */
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

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	lenght;

	lenght = ft_strlen(s);
	if (fd < 0)
		return ;
	write(fd, s, lenght);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
	return ;
}

int	main(void)
{
	ft_putnbr_fd(6, 1);
	return (0);
}

// int	abs(int c)
// {
// 	if (c < 0)
// 	{
// 		c = c * (-1);
// 		return (c);
// 	}
// 	return (c);
// }
// void	ft_putnbr_fd(int n, int fd)
// {
// 	int	number;

// 	number = abs(n);
// 	if (n < 0 && number > 10)
// 	{
// 		write(fd, "-", 1);
// 		write(fd, number, 1);
// 	}
// 	if (n < 0 && number <= 10)
// 	{
// 		write(fd, "-", 1);
// 		write(fd, number, 1);
// 	}
// 	if (number == 0)
// 		write(fd, "0", 1);
// 	if (number < 10)
// 		write(fd, n, 10);
// 	else
// 		write(fd, n, 1);
// }
