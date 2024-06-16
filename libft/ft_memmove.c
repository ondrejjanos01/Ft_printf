/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:53:59 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/21 11:08:59 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;

	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	len = 0;
	if (dest < src)
	{
		while (len < n)
		{
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
			len++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	return (dest);
}

/*int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];

    ft_memmove(dest, src, strlen(src) + 1);
    printf("Copied string: %s\n", dest);

    return 0;
}*/
