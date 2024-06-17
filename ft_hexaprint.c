/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printpoint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:05:27 by ojanos            #+#    #+#             */
/*   Updated: 2024/06/11 19:51:52 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	fdigits(unsigned int n)
{
	size_t	digit;

	digit = 0;
	if (n == 0)
		return (1);
	while (n !=0)
	{
		digit++;
		n /= 16;
	}
	return (digit);
}

static void	hexa(unsigned int nbr, bool upper_case)
{
	char	upper_digit[] = "0123456789ABCDEF";
	char	lower_digit[] = "0123456789abcdef";

	if (nbr >= 16)
		hexa(nbr / 16, upper_case);
	if (upper_case == true)
		write(STDOUT_FILENO, &upper_digit[nbr % 16], 1);
	else
		write(STDOUT_FILENO, &lower_digit[nbr % 16], 1);
}

int	ft_hexaprint(unsigned int nbr, bool upper_case)
{
	hexa(nbr, upper_case);
	return (fdigits(nbr));
}
