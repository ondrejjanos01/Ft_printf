/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:26:17 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/21 11:37:15 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int i)
{
	unsigned char	c;

	c = (unsigned char)i;
	while (*src)
	{
		if ((unsigned char)*src == c)
			return ((char *)src);
		src++;
	}
	if (c == '\0')
		return ((char *)src);
	return (0);
}

/*int main(void)
{
    const char *str = "Hello, World!";
    int ch = 'o';
    char *result = ft_strchr(str, ch);
    if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", ch);
    }
    return 0;
}*/
