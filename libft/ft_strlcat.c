/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:15:49 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/21 10:36:31 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[y] && (i + y + 1) < size)
	{
		dest[i + y] = src [y];
		y++;
	}
	if (i < size)
		dest[i + y] = '\0';
	return (i + ft_strlen(src));
}

/*int main()
{
    char dest[20] = "Hello, ";
    const char src[] = "World!";
    size_t size = 15;

    size_t result = ft_strlcat(dest, src, size);
    
    printf("Resulting string: \"%s\"\n", dest);
    printf("Total length: %zu\n", result);

    return 0;
}*/
