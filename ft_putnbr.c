/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:39:12 by ojanos            #+#    #+#             */
/*   Updated: 2024/06/11 18:44:11 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int n)
{
	long	nbl;
	char	c[10];
	short	i;

	i = 0;
	nbl = n;
	if (nbl == 0)
		write(1, "0", 1);
	if (nbl < 0)
	{
		nbl *= -1;
		write(1, "-", 1);
	}
	if (nbl != 0)
	{
		c[i++] = (nbl % 10) + '0';
		nbl /= 10;
	}
	while (i > 0)
	{
		write(1, &c[--i], 1);
	}
}
