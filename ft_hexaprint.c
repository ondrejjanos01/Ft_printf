/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:05:27 by ojanos            #+#    #+#             */
/*   Updated: 2024/06/20 19:59:52 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	fdigits(unsigned long n)
{
	size_t	digit;

	digit = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		digit++;
		n /= 16;
	}
	return (digit);
}

static void	hexa(unsigned long nbr, bool upper_case)
{
	char	*digits;

	if (upper_case)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	if (nbr >= 16)
		hexa (nbr / 16, upper_case);
	write(1, &digits[nbr % 16], 1);
}

int	ft_hexaprint(unsigned int nbr, char format)
{
	unsigned long	number;
	bool			upper_case;

	number = nbr;
	upper_case = (format == 'X');
	hexa(number, upper_case);
	return (fdigits(number));
}
