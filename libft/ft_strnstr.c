/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:15:29 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/21 12:25:42 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little [j])
		{
			while (big[i + j] == little[j] && i + j < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
    const char *big = "Hello, World!";
    const char *little = "World";
    size_t len = 12;

    char *result = ft_strnstr(big, little, len);
    if (result != NULL)
        printf("Found substring: \"%s\"\n", result);
    else
        printf("Substring not found\n");

    little = "Hello";
    len = 5;
    result = ft_strnstr(big, little, len);
    if (result != NULL)
        printf("Found substring: \"%s\"\n", result);
    else
        printf("Substring not found\n");

    little = "";
    len = 5;
    result = ft_strnstr(big, little, len);
    if (result != NULL)
        printf("Found substring: \"%s\"\n", result);
    else
        printf("Substring not found\n");

    return 0;
}*/
