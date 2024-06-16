/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:24:15 by ojanos            #+#    #+#             */
/*   Updated: 2024/06/16 19:00:26 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./ft_strlen.c"
#include "./ft_putchar.c"
#include "./ft_putstr.c"

static int	rec_print(unsigned long n, const char *base)
{
	int	len;

	len = 0; 
	if (n > (ft_strlen(base) - 1))
		len += rec_print(n / ft_strlen (base), base);
	len += ft_putchar(*(base +(n % ft_strlen(base))));
	return (len);
}

int	ft_printadress(void *format)
{
	unsigned long	n;
	const char	*base;
	int	len;

	n = (unsigned long)format;
	base = "0123456789abcdef";
	len = ft_putstr("0x");
	len += rec_print(n, base);
	return (len);
}
