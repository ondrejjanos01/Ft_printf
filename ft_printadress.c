/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:24:15 by ojanos            #+#    #+#             */
/*   Updated: 2024/06/20 20:03:23 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	rec_print(unsigned long n, const char *base)
{
	int	len;

	len = 0;
	if (n > (ft_strlen(base) - 1))
		len += rec_print(n / ft_strlen(base), base);
	len += ft_putchar(*(base +(n % ft_strlen(base))));
	return (len);
}

int	ft_printadress(void *format)
{
	int				len;
	unsigned long	n;
	const char		*base;

	if (!format)
		return (write(1, "(nil)", 5));
	n = (unsigned long)format;
	base = "0123456789abcdef";
	len = write(1, "0x", 2);
	len += rec_print(n, base);
	return (len);
}
