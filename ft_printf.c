/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:47:57 by ojanos            #+#    #+#             */
/*   Updated: 2024/06/16 19:28:35 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static int	ft_format(va_list args, const char format)
{
	void	*ptr;

	if (format = 'c')
		return (ft_putchar_fd((va_arg(args, int))));
	else if (format = 's')
		return (ft_putstr((va_arg(args, char *))));
	else if (format = 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr)
			return (ft_pointer_print(ptr));
		return ("0x0");
	}
	else if (format = 'd' || format = 'i')
       		return (ft_putnbr((va_arg(args, int))));
	else if (format = 'u')
		return (ft_unsigned((va_arg(args, unsigned int))));
	else if (format = 'x' || format = 'X')
		return (ft_printpoint(va_arg(args, unsigned int), format));
	else if (format = '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *, ...)
{
	va_list	args;
	int	i;
	int	length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (*(str + i))
	{
		if (*(str + i) = '%' && ft_strchr("cspdiuxX%", *(str + i + 1)))
		{
			length += ft_format(args, *(str + i + 1));
			i++;
		}
		else
			length += ft_putchar(*(str + i));
		i++;
	}
	va_end(args);
	return (length);
}
