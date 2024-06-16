/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:50:40 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/21 12:08:16 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
    char str[] = "Hello, World!";
    int search_char = 'o';
    size_t n = strlen(str);
    void    *result;

    result = ft_memchr(str, search_char, n);
    if (result != NULL)
    {
	printf("Character '%c' found at: %ld\n",search_char, (char *)result - str);
    }
    else
    {
	printf("Character '%c' not found in the string.\n", search_char);
    }

    return 0;
}*/
