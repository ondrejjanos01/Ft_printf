/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:08:55 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/21 12:14:40 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
    char str1[] = "Hello";
    char str2[] = "World";
    size_t n = 5;

    int result = memcmp(str1, str2, n);
    if (result < 0)
        printf("'%s' is less than '%s'.\n", str1, str2);
    else if (result > 0)
        printf("'%s' is greater than '%s'.\n", str1, str2);
    else
        printf("'%s' is equal to '%s'.\n", str1, str2);

    return 0;
}*/
