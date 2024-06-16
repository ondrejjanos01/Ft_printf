/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:39:37 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/24 13:43:29 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbl;
	char	c[10];
	short	i;

	i = 0;
	nbl = n;
	if (nbl == 0)
	{
		write(fd, "0", 1);
	}
	if (nbl < 0)
	{
		nbl *= -1;
		write(fd, "-", 1);
	}
	while (nbl != 0)
	{
		c[i++] = (nbl % 10) + '0';
		nbl /= 10;
	}
	while (i > 0)
	{
		write(fd, &c[--i], 1);
	}
}

/*int main(void)
{
    int num = -12345;
    int fd = STDOUT_FILENO;

    ft_putnbr_fd(num, fd);

    return 0;
}*/
