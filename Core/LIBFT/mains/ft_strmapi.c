/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:33:49 by bmarek            #+#    #+#             */
/*   Updated: 2023/11/23 10:38:03 by bmarek           ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

#include <stdio.h>
char uppercase_mapping(unsigned int index, char c)
{
	(void)index; 
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

int main(void)
{
    const char *originalString = "Hello, World!";   
    printf("Original string: %s\n", originalString);
    // Using ft_strmapi to create a new string with uppercase mapping
    char *newString = ft_strmapi(originalString, uppercase_mapping);
    if (newString != NULL) {
        printf("Mapped string: %s\n", newString);
        free(newString);  // Don't forget to free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
