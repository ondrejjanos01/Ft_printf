/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:09:07 by ojanos            #+#    #+#             */
/*   Updated: 2024/03/07 11:31:23 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int main(void)
{
    int lowercase = 'a';
    int uppercase = ft_toupper(lowercase);
    printf("Uppercase of '%c' is '%c'\n", lowercase, uppercase);

    int notLowercase = '3';
    int notChanged = ft_toupper(notLowercase);
    printf("'%c' remains unchanged: '%c'\n", notLowercase, notChanged);

    return 0;
}*/
