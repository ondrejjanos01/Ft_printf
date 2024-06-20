/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:39:12 by ojanos            #+#    #+#             */
/*   Updated: 2024/06/20 20:00:33 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	i_digits(int n)
{
	size_t	digits;

	digits = 0;
	if (n <= 0)
		digits += 1;
	while (n != 0)
	{
		n /= 10;
		digits += 1;
	}
	return (digits);
}

static void	put_int(int n)
{
	const char	digits [] = "0123456789";

	if (n > 9)
		put_int(n / 10);
	write(STDOUT_FILENO, &digits[n % 10], 1);
}

int	ft_putnbr(int n)
{
	int	len;

	if (n == INT_MIN)
		return ((write(STDOUT_FILENO, "-2147483648", 11)));
	len = i_digits(n);
	if (n < 0)
	{
		write(STDOUT_FILENO, "-", 1);
		n *= -1;
	}
	put_int(n);
	return (len);
}
