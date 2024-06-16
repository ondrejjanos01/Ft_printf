/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:34:31 by ojanos            #+#    #+#             */
/*   Updated: 2024/03/07 11:46:41 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int main(void)
{
    int uppercase = 'H';
    int lowercase = ft_tolower(uppercase);
    printf("Lowercase of '%c' is '%c'\n", uppercase, lowercase);

    int notUppercase = '7';
    int notChanged = ft_tolower(notUppercase);
    printf("'%c' remains unchanged: '%c'\n", notUppercase, notChanged);

    return 0;
}*/
