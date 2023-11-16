/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:43:41 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/15 16:31:37 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//DO POPRAWY
#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
	{
		i++;
	}
	if (i < n)
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str1[] = "Heyoo";
// 	char	str2[] = "Helpo";
// 	int		result;
// 	int		result2;

// 	size_t n = 5;
// 	result = ft_memcmp(str1, str2, n);
// 	result2 = memcmp(str1, str2, n);
// 	printf("%d\n",result2);
// 	printf("%d\n",result);
// 	if (result < 0)
// 	{
// 		printf("str1 is less than str2\n");
// 	}
// 	else if (result > 0)
// 	{
// 		printf("str1 is greater than str2\n");
// 	}
// 	else
// 	{
// 		printf("str1 is equal to str2\n");
// 	}
// 	return (0);
// }
