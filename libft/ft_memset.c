/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:37:08 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/21 10:41:45 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

/*int main(void)
{
	char test1[10] = "abcdefghi";
	char test2[10] = "123456789";

	printf("Before ft_memset:\n");
	printf("test1: %s\n", test1);
	printf("test2: %s\n", test2);

	ft_memset(test1, 'X', 5);
	ft_memset(test2, '0', 3);

	printf("After ft_memset:\n");
	printf("test1: %s\n", test1);
	printf("test2: %s\n", test2);

	return 0;
}*/
