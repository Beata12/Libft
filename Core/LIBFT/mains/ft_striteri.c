/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:40:49 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:25:39 by bmarek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

#include "libft.h"
#include <stdio.h>
void uppercase_char(unsigned int index, char *c)
{
	(void)index;
    if (*c >= 'a' && *c <= 'z')
    {
        *c = *c - ('a' - 'A');
    }
}

int main(void)
{
    char test_string[] = "Hello, World!";
    printf("Original string: %s\n", test_string);
    // Using ft_striteri to uppercase each character in the string
    ft_striteri(test_string, uppercase_char);
    printf("Uppercased string: %s\n", test_string);
    return 0;
}
