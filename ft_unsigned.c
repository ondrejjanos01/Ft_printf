/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 20:24:38 by ojanos            #+#    #+#             */
/*   Updated: 2024/06/16 20:29:30 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	ft_unsigned(unsigned long n)
{
	int	len;
	char	*base;

	len = 0;
	base = "0123456789";
	if (n > (ft_strlen(base) - 1))
			len += ft_unsigned(n / ft_strlen(base));
	len += ft_putchar_fd(*(base + (n % ft_strlen(base))));
	return (len);
}
