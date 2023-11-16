/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:34:41 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/16 07:39:02 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c;
	i = 0;
	while (s[i] != '\0' && s[i] != a)
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == a)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char		*result;
// 	char		b;
// 	const char a[] = "Hello, how, are, you?";
// 	b = ',';
// 	result = strrchr(a, b);
// 	printf("%s", result);
// }
// int	main(void)
// {
// 	char		*result;
// 	char		b;
// 	const char a[] = "Hello, how, are, you?";
// 	b = ',';
// 	result = strrchr(a, b);
// 	printf("%s", result);
// 	if (result != NULL)
// 	{
// 		printf("Character '%c' found at position: %ld\n", b, result - a);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found.\n", b);
// 	}
// 	return (0);
// }
