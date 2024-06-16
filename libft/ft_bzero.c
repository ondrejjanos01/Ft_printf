/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:41:54 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/21 10:43:05 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main(void)
{
    char test1[10] = "abcdefghi";
    char test2[10] = "123456789";
    int i;

    printf("Before ft_bzero:\n");
    printf("test1: %s\n", test1);
    printf("test2: %s\n", test2);

    ft_bzero(test1, 5);
    ft_bzero(test2, 3);

    printf("After ft_bzero:\n");
    printf("test1: ");

    i = 0;
    while (i < 10; i++)
    {
        printf("%c", test1[i] ? test1[i] : '.');
        i++;
    }
    printf("\n");

    printf("test2: ");
    i = 0;
    while (i < 10) {
        printf("%c", test2[i] ? test2[i] : '.');
        i++;
    }
    printf("\n");

    return 0;
}*/
