/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:45:02 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:05:22 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	abs(int n)
{
	if (n < 0)
		return (n * (-1));
	return (n);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
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

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!(new))
		return (NULL);
	while (*src)
	{
		new[i++] = *src++;
	}
	new[i] = '\0';
	return (new);
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

// char	*ft_itoa(int n)
// {
// 	int		i;
// 	char	*new;
// 	int		num;

// 	i = 0;
// 	if (n == -2147483648)
// 		return (ft_strdup("-2147483648"));
// 	num = abs(n);
// 	i = digitlen(num) - 1;
// 	if (n < 0)
// 		i++;
// 	new = (char *)malloc(sizeof(char) * (digitlen(num) + 2));
// 	if (new == NULL)
// 		return (NULL);
// 	while (i >= 0)
// 	{
// 		new[i] = num % 10 + '0';
// 		num = num / 10;
// 		i--;
// 	}
// 	if (n < 0)
// 	{
// 		new[0] = '-';
// 		new[digitlen(n) + 1] = '\0';
// 	}
// 	else
// 		new[digitlen(n)] = '\0';
// 	return (new);
// }
#include <stdio.h>

int	main(void)
{
	int		number;
	char	*result;

	number = -9;
	result = ft_itoa(number);
	if (result != NULL)
	{
		printf("Liczba %d\njako ciąg znaków: /%s/\n", number, result);
		free(result);
	}
	else
	{
		printf("Błąd alokacji pamięci.\n");
	}
	return (0);
}
